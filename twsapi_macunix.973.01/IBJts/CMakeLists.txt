cmake_minimum_required(VERSION 3.5)
project(TestCppClient)
enable_language(CXX)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-Wall -Wno-switch")
find_package(Threads REQUIRED)

set(SOURCE_FILES
        samples/Cpp/TestCppClient/AccountSummaryTags.cpp
        samples/Cpp/TestCppClient/AccountSummaryTags.h
        samples/Cpp/TestCppClient/AvailableAlgoParams.cpp
        samples/Cpp/TestCppClient/AvailableAlgoParams.h
        samples/Cpp/TestCppClient/ContractSamples.cpp
        samples/Cpp/TestCppClient/ContractSamples.h
        samples/Cpp/TestCppClient/FAMethodSamples.h
        #samples/Cpp/TestCppClient/Main.cpp
        samples/Cpp/TestCppClient/OrderSamples.cpp
        samples/Cpp/TestCppClient/OrderSamples.h
        samples/Cpp/TestCppClient/ScannerSubscriptionSamples.cpp
        samples/Cpp/TestCppClient/ScannerSubscriptionSamples.h
        samples/Cpp/TestCppClient/StdAfx.cpp
        samples/Cpp/TestCppClient/StdAfx.h
        samples/Cpp/TestCppClient/TestCppClient.cpp
        samples/Cpp/TestCppClient/TestCppClient.h
        source/CppClient/client/CommissionReport.h
        source/CppClient/client/CommonDefs.h
        source/CppClient/client/Contract.h
        source/CppClient/client/ContractCondition.cpp
        source/CppClient/client/ContractCondition.h
        source/CppClient/client/DefaultEWrapper.cpp
        source/CppClient/client/DefaultEWrapper.h
        source/CppClient/client/DepthMktDataDescription.h
        source/CppClient/client/EClient.cpp
        source/CppClient/client/EClient.h
        source/CppClient/client/EClientMsgSink.h
        source/CppClient/client/EClientSocket.cpp
        source/CppClient/client/EClientSocket.h
        source/CppClient/client/EDecoder.cpp
        source/CppClient/client/EDecoder.h
        source/CppClient/client/EMessage.cpp
        source/CppClient/client/EMessage.h
        source/CppClient/client/EMutex.cpp
        source/CppClient/client/EMutex.h
        source/CppClient/client/EPosixClientSocketPlatform.h
        source/CppClient/client/EReader.cpp
        source/CppClient/client/EReader.h
        source/CppClient/client/EReaderOSSignal.cpp
        source/CppClient/client/EReaderOSSignal.h
        source/CppClient/client/EReaderSignal.h
        source/CppClient/client/EReaderWMSignal.cpp
        source/CppClient/client/EReaderWMSignal.h
        source/CppClient/client/ESocket.cpp
        source/CppClient/client/ESocket.h
        source/CppClient/client/ETransport.h
        source/CppClient/client/EWrapper.h
        source/CppClient/client/Execution.h
        source/CppClient/client/executioncondition.cpp
        source/CppClient/client/executioncondition.h
        source/CppClient/client/FamilyCode.h
        source/CppClient/client/IExternalizable.h
        source/CppClient/client/MarginCondition.cpp
        source/CppClient/client/MarginCondition.h
        source/CppClient/client/OperatorCondition.cpp
        source/CppClient/client/OperatorCondition.h
        source/CppClient/client/Order.h
        source/CppClient/client/OrderCondition.cpp
        source/CppClient/client/OrderCondition.h
        source/CppClient/client/OrderState.h
        source/CppClient/client/PercentChangeCondition.cpp
        source/CppClient/client/PercentChangeCondition.h
        source/CppClient/client/PriceCondition.cpp
        source/CppClient/client/PriceCondition.h
        source/CppClient/client/Resource.h
        source/CppClient/client/ScannerSubscription.h
        source/CppClient/client/shared_ptr.h
        source/CppClient/client/SoftDollarTier.cpp
        source/CppClient/client/SoftDollarTier.h
        source/CppClient/client/StdAfx.cpp
        source/CppClient/client/StdAfx.h
        source/CppClient/client/TagValue.h
        source/CppClient/client/TickAttrib.h
        source/CppClient/client/TimeCondition.cpp
        source/CppClient/client/TimeCondition.h
        source/CppClient/client/TwsSocketClientErrors.h
        source/CppClient/client/VolumeCondition.cpp
        source/CppClient/client/VolumeCondition.h
        #samples/Cpp/TestCppClient/TKtradingapp.cpp
        )

include_directories(source/CppClient/client)

add_executable(TestCppClient.out ${SOURCE_FILES} samples/Cpp/TestCppClient/Main.cpp)
target_link_libraries(TestCppClient.out ${CMAKE_THREAD_LIBS_INIT} )

add_executable(TKtradingapp.out ${SOURCE_FILES} samples/Cpp/TestCppClient/TKtradingapp.cpp)
target_link_libraries(TKtradingapp.out ${CMAKE_THREAD_LIBS_INIT} )