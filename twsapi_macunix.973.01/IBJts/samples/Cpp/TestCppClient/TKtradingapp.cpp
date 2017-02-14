//
// Created by root on 2/13/17.
//

#include "StdAfx.h"

#include <stdio.h>
#include <stdlib.h>

#include <chrono>
#include <thread>

#include "TestCppClient.h"

int main(int argc, char** argv){
    const char* host = argc > 1 ? argv[1] : "";
    unsigned int port = argc > 2 ? atoi(argv[2]) : 0;
    if (port <= 0)
        port = 4001;
    int clientId = 0;

    TestCppClient testCppClient;
    testCppClient.connect(host,port,clientId);
    testCppClient.connectAck();
    while( testCppClient.isConnected()) {
        testCppClient.processMessages();
    }
    testCppClient.disconnect();
    return 0;
}