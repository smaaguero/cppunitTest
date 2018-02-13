//
// Created by frivas on 13/02/18.
//

#include <Aritmetic.h>
#include "AritmeticTests.h"


static const double delta=0.1;

void AritmeticTests::testSum_1() {
    CPPUNIT_ASSERT_DOUBLES_EQUAL(Aritmetic::sum(5,3), 8,delta);
}

void AritmeticTests::testSum_2() {
    CPPUNIT_ASSERT_DOUBLES_EQUAL(Aritmetic::sum(0,0), 0,delta);

}

void AritmeticTests::testMult_1() {
    CPPUNIT_ASSERT_DOUBLES_EQUAL(Aritmetic::mult(5,3), 15,delta);
}

void AritmeticTests::testMult_2() {
    CPPUNIT_ASSERT_DOUBLES_EQUAL(Aritmetic::mult(0,0), 0,delta);
}

void AritmeticTests::testEval_1() {
    CPPUNIT_ASSERT_DOUBLES_EQUAL(Aritmetic::eval(0,0), 1,delta);
}

void AritmeticTests::testEval_2() {
    CPPUNIT_ASSERT_DOUBLES_EQUAL(Aritmetic::eval(1,100), 1,delta);
}

void AritmeticTests::testMod_1() {
    CPPUNIT_ASSERT_DOUBLES_EQUAL(Aritmetic::mod(10,2), 0,delta);
}

void AritmeticTests::testMod_2() {
    CPPUNIT_ASSERT_DOUBLES_EQUAL(Aritmetic::mod(3,2), 1,delta);
}

void AritmeticTests::testDiv_1() {
    CPPUNIT_ASSERT_DOUBLES_EQUAL(Aritmetic::div(3,2), 1.5,delta);
}

void AritmeticTests::testDiv_2() {
    CPPUNIT_ASSERT_DOUBLES_EQUAL(Aritmetic::div(1,1), 1,delta);

}
