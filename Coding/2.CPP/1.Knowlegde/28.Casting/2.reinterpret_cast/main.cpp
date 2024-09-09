// #include <iostream>
// #include <cstring>  // For memcpy

// // Example structures for IP and TCP packets
// struct IPPacket {
//     uint8_t version;
//     uint8_t headerLength;
//     uint16_t totalLength;
//     // Other fields...
// };

// struct TCPPacket {
//     uint16_t sourcePort;
//     uint16_t destPort;
//     uint32_t sequenceNumber;
//     // Other fields...
// };

// int main() {
//     // Create an IP packet and a TCP packet
//     IPPacket ipPacket = { 4, 20, 40 };  // Example values
//     TCPPacket tcpPacket = { 8080, 80, 12345 };  // Example values

//     // Allocate a char buffer large enough to hold either packet
//     char buffer[1024];

//     // Copy the IP packet to the char buffer
//     std::memcpy(buffer, reinterpret_cast<char*>(&ipPacket), sizeof(ipPacket));
//     std::cout << "IP Packet copied to buffer." << std::endl;

//     // Copy the TCP packet to the char buffer
//     std::memcpy(buffer, reinterpret_cast<char*>(&tcpPacket), sizeof(tcpPacket));
//     std::cout << "TCP Packet copied to buffer." << std::endl;

//     return 0;
// }
