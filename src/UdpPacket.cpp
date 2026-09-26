#include "UdpPacket.h"
#include <sstream>

UdpPacket::UdpPacket(
    int packetId,
    Protocol protocol,
    int sourcePort,
    int destinationPort,
    int length,
    int checksum,
    float src_ip,
    float dest_ip
)
    : Packet(packetId, protocol, sourcePort, destinationPort),
      length(length),
      checksum(checksum),
      src_ip(src_ip),
      dest_ip(dest_ip)
{
}

std::string UdpPacket::getPacketInfo() const
{
    std::ostringstream info;

    info << "UDP Packet Info:\n";
    info << "Packet ID: " << getPacketId() << "\n";
    info << "Protocol: UDP\n";
    info << "Source Port: " << getSourcePort() << "\n";
    info << "Destination Port: " << getDestinationPort() << "\n";
    info << "Length: " << length << "\n";
    info << "Checksum: " << checksum << "\n";
    info << "Source IP: " << src_ip << "\n";
    info << "Destination IP: " << dest_ip;
    return info.str();
}