#ifndef TCP_PACKET_H
#define TCP_PACKET_H

#include "Packet.h"

class TcpPacket : public Packet
{
    private:
        int sequenceNumber;
        int acknowledgmentNumber;
        float src_ip;
        float dest_ip;

    public:
        TcpPacket(
            int packetId,
            Protocol protocol,
            int sourcePort,
            int destinationPort,
            int sequenceNumber,
            int acknowledgmentNumber,
            float src_ip,
            float dest_ip
        );

        std::string getPacketInfo() const override;
};

#endif
