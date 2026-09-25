#include <iostream>
#include "TcpPacket.h"
int main()
{
    TcpPacket packet(
        1, // packetId
        Protocol::TCP, // protocol
        12345, // sourcePort
        80, // destinationPort
        1001, // sequenceNumber
        2002, // acknowledgmentNumber
        192.168f, // src_ip
        10.0f // dest_ip
    );

    std::cout << packet.getPacketInfo() << std::endl;

    return 0;
}