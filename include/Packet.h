#include <string>
#ifndef PACKET_H
#define PACKET_H
/*
A enum Protocol is defined to represent the different protocols that a packet can use. 
The Packet class is defined to represent a network packet, with private member variables 
for the packet ID, protocol, source port, and destination port. 
The constructor for the Packet class takes in these values as parameters.*/
enum class Protocol
{
    TCP,
    UDP,
    SOMEIP
};

class Packet
{
    private:
        int packetId;
        Protocol protocol;
        int sourcePort;
        int destinationPort;

    public:
        Packet(
            int packetId,
            Protocol protocol,
            int sourcePort,
            int destinationPort
        );

    virtual ~Packet() = default;

    int getPacketId() const;
    Protocol getProtocol() const;
    int getSourcePort() const;
    int getDestinationPort() const;

    virtual std::string getPacketInfo() const = 0;
};
#endif // PACKET_H