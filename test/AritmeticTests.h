//
// Created by frivas on 13/02/18.
//

#ifndef PROJECT_ARITMETICTESTS_H
#define PROJECT_ARITMETICTESTS_H


#include <cppunit/TestFixture.h>;
#include <cppunit/extensions/HelperMacros.h>


class AritmeticTests: public CPPUNIT_NS::TestFixture {

    CPPUNIT_TEST_SUITE(AritmeticTests);
        CPPUNIT_TEST(testSum_1);
        CPPUNIT_TEST(testSum_2);
        CPPUNIT_TEST(testMult_1);
        CPPUNIT_TEST(testMult_2);
        CPPUNIT_TEST(testEval_1);
        CPPUNIT_TEST(testEval_2);
        CPPUNIT_TEST(testMod_1);
        CPPUNIT_TEST(testMod_2);
        CPPUNIT_TEST(testDiv_1);
        CPPUNIT_TEST(testDiv_2);


    CPPUNIT_TEST_SUITE_END();

    public:
        void testSum_1();
        void testSum_2();
        void testMult_1();
        void testMult_2();
        void testEval_1();
        void testEval_2();
        void testMod_1();
        void testMod_2();
        void testDiv_1();
        void testDiv_2();



};


CPPUNIT_TEST_SUITE_REGISTRATION( AritmeticTests );



#endif //PROJECT_ARITMETICTESTS_H
