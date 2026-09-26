#ifndef UDP_PACKET_H

#include "Packet.h"
class UdpPacket : public Packet
{
    private:
        int length;
        int checksum;
        float src_ip;
        float dest_ip;

    public:
        UdpPacket(
            int packetId,
            Protocol protocol,
            int sourcePort,
            int destinationPort,
            int length,
            int checksum,
            float src_ip,
            float dest_ip
        );

        std::string getPacketInfo() const override;
};
#endif // UDP_PACKET_H