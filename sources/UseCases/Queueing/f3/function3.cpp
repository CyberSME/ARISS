#include "CBasefunction.h"
#include <iostream>
int main(int argc, char *argv[]) {
//    int redemarrage = atoi(argv[7]);
//    int position = atoi(argv[6]);
//    GUI_ARINC_partition("Partition3", position, redemarrage);
//    int nbarg = argc;
//    char **argument = new char*[argc];
//    int i = 0;
//    for (i = 0; i <= nbarg; i++) {
//        argument[i] = argv[i];
//    }
//    COMMUNICATION_VECTOR myCvector;
//    myCvector = init_communication(nbarg, argument, NULL);
//    Type_Message rMessage;
//    int portID;
//    int sock;
//    vector_get(&(myCvector.vqueuing_port), 0, &portID);
//    vector_get(&(myCvector.vqueuing_socket), 0, &sock);
//    int ifmessage = 0;
////    CQueuing Qservice;
//    for (;;) {
//        std::cout << "Dans le boucle for, vqueuing_socket[0] : " << sock << std::endl;
////        Qservice.READ_QUEUING_MESSAGE(myCvector.vqueuing_socket[0]);
//        ifmessage = RECEIVE_QUEUING_MESSAGE(sock, &rMessage);
//        if (ifmessage > 0) {
//            //            Qservice.Display_Message();
//            std::cout << "			" << std::endl;
//            std::cout << "Display message : " << rMessage.m_message << std::endl;
//            std::cout << "length " << rMessage.m_length << std::endl;
//            std::cout << "total length " << sizeof (rMessage) << std::endl;
//            std::cout << "receive :" << rMessage.m_message << std::endl;
//            std::cout << "			" << std::endl;
//        }
////        if (ifmessage > 0)
////            Qservice.Display_Message();
//    }
    return 0;
}