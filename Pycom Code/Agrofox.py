from network import Sigfox
import socket
from machine import UART
# this uses the UART_1 default pins for TXD and RXD (``P3`` and ``P4``)
uart = UART(1, baudrate=9600)
dato="mensaje"
i=0

while i==0:
    dato = uart.read(12) # read up to 5 bytes}
    if dato == None:
        i=0
    else:
        print(dato.decode())
        i=1
print ("Recibidos")

datos=dato.decode()
tempe = int(datos[0:-10])
hume = int(datos[2:-8])
inde = int(datos[4:-6])
tempa = int(datos[6:-4])
huma = int(datos[8:-2])
inda = int(datos[10:])

# init Sigfox for RCZ1 (Europe)
sigfox = Sigfox(mode=Sigfox.SIGFOX, rcz=Sigfox.RCZ2)

# create a Sigfox socket
s = socket.socket(socket.AF_SIGFOX, socket.SOCK_RAW)

# make the socket blocking
s.setblocking(True)

# configure it as uplink only
s.setsockopt(socket.SOL_SIGFOX, socket.SO_RX, False)

# send some bytes
# s.send(bytes([temp,hume,inde,tempa,huma,inda]))
s.send(bytes([tempe,hume,inde,tempa,huma,inda]))

print("Datos Enviados")
