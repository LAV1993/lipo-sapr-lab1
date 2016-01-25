/*
 * File:   HelloerTest.cpp
 * Author: duory
 *
 * Created on 20.09.2015, 22:30:10
 */

#include "HelloerTest.h"
#include "Helloer.h"


CPPUNIT_TEST_SUITE_REGISTRATION(HelloerTest);

HelloerTest::HelloerTest() {
}

HelloerTest::~HelloerTest() {
}

void HelloerTest::setUp() {
}

void HelloerTest::tearDown() {
}

void HelloerTest::testMessage() {
    Helloer helloer("Peoples");
    string result = helloer.message();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(result == "Hello Peoples");
    }
}

