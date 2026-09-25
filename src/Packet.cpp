#include "Packet.h"

Packet::Packet(
    int packetId,
    Protocol protocol,
    int sourcePort,
    int destinationPort
)
    : packetId(packetId),
      protocol(protocol),
      sourcePort(sourcePort),
      destinationPort(destinationPort)
{
}

int Packet::getPacketId() const
{
    return packetId;
}

Protocol Packet::getProtocol() const
{
    return protocol;
}

int Packet::getSourcePort() const
{
    return sourcePort;
}

int Packet::getDestinationPort() const
{
    return destinationPort;
}