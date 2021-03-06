// [===========================================================================]
// [                               C r y p t o x                               ]
// [---------------------------------------------------------------------------]
// [                                                                           ]
// [                          Copyright (C) 2016-2017                          ]
// [                      Rodrigo Madera <madera@acm.org>                      ]
// [                                                                           ]
// [---------------------------------------------------------------------------]
// [         Distributed under the Boost Software License, Version 1.0         ]
// [ Read accompanying LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt ]
// [===========================================================================]

#define BOOST_TEST_MAIN
#include <boost/test/unit_test.hpp>

struct initialize_tests {
	initialize_tests() {
		srand(time(0));
	}
};

BOOST_GLOBAL_FIXTURE(initialize_tests);
