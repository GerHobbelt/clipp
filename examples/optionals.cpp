/*****************************************************************************
 *
 * demo program - part of CLIPP (command line interfaces for modern C++)
 *
 * released under MIT license
 *
 * (c) 2017-2018 André Müller; foss@andremueller-online.de
 *
 *****************************************************************************/

#include <iostream>
#include <string>

#include <clipp.h>

#include "monolithic_examples.h"



#if defined(BUILD_MONOLITHIC)
#define main(cnt, arr)      clipp_optionals_main(cnt, arr)
#endif

int main(int argc, const char** argv)
{
    using namespace clipp;
    using std::cout;

    int n = 0;
	bool domerge = false;
	long m = 5;
    auto print_ratio = [](const char* r) { cout << "using ratio of " << r << '\n'; };

	std::vector<std::string> unrecognized;

	auto cli = (
        (option("-n", "--count") & opt_value("count", n))           % "number of iterations",
        (option("-r", "--ratio") & opt_value("ratio", print_ratio)) % "compression ratio",
        (option("-m") & opt_value("lines=5", m).set(domerge))   % "merge lines (default: 5)",
		any_other(unrecognized)
	);

	auto res = parse(argc, argv, cli);

	debug::print(std::cout, res);

	if (res && unrecognized.empty()) {
        cout << "performing "  << n << " iterations\n";
        if(domerge) cout << "merge " << m << " lines\n";
    }
    else {
		cout << "Wrong command line arguments!\n";
		for (auto& a : unrecognized) {
			cout << "Unrecognized arg: " << a << "\n";
		}
		cout << "--------------------------------------------------------------------\n";
		cout << make_man_page(cli, argv[0]) << '\n';
    }
	return EXIT_SUCCESS;
}
