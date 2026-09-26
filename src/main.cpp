#include <iostream>
#include "TcpPacket.h"
#include "UdpPacket.h"
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
    std::cout <<"****UDP Packet Info:****" << std::endl;
    UdpPacket udpPacket(
        2, // packetId
        Protocol::UDP, // protocol
        54321, // sourcePort
        8080, // destinationPort
        512, // length
        1234, // checksum
        192.168f, // src_ip
        10.0f // dest_ip
    );
    std::cout << udpPacket.getPacketInfo() << std::endl;

    return 0;
}