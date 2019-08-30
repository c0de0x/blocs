/* Copyright (c) 2019-2020 The Bitstats Developers */
// Copyright (c) 2015 The BITSTATS developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITSTATS_TEST_TEST_BITSTATS_H
#define BITSTATS_TEST_TEST_BITSTATS_H

#include "txdb.h"

#include <boost/filesystem.hpp>
#include <boost/thread.hpp>

/** Basic testing setup.
 * This just configures logging and chain parameters.
 */
struct BasicTestingSetup {
    BasicTestingSetup();
    ~BasicTestingSetup();
};

/** Testing setup that configures a complete environment.
 * Included are data directory, coins database, script check threads
 * and wallet (if enabled) setup.
 */
struct TestingSetup: public BasicTestingSetup {
    CCoinsViewDB *pcoinsdbview;
    boost::filesystem::path pathTemp;
    boost::thread_group threadGroup;
    ECCVerifyHandle globalVerifyHandle;

    TestingSetup();
    ~TestingSetup();
};

#endif
