#include "TcpPacket.h"

#include <sstream>

TcpPacket::TcpPacket(
    int packetId,
    Protocol protocol,
    int sourcePort,
    int destinationPort,
    int sequenceNumber,
    int acknowledgmentNumber,
    float src_ip,
    float dest_ip
)
    : Packet(packetId, protocol, sourcePort, destinationPort),
      sequenceNumber(sequenceNumber),
      acknowledgmentNumber(acknowledgmentNumber),
      src_ip(src_ip),
      dest_ip(dest_ip)
{
}

std::string TcpPacket::getPacketInfo() const
{
    std::ostringstream info;

    info << "TCP Packet Info:\n";
    info << "Packet ID: " << getPacketId() << "\n";
    info << "Protocol: TCP\n";
    info << "Source Port: " << getSourcePort() << "\n";
    info << "Destination Port: " << getDestinationPort() << "\n";
    info << "Sequence Number: " << sequenceNumber << "\n";
    info << "Acknowledgment Number: " << acknowledgmentNumber << "\n";
    info << "Source IP: " << src_ip << "\n";
    info << "Destination IP: " << dest_ip;
    return info.str();
}