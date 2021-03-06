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
#include "clipp.h"

#include "monolithic_examples.h"



#if defined(BUILD_MONOLITHIC)
#define main(cnt, arr)      clipp_convert_main(cnt, arr)
#endif

int main(int argc, const char** argv)
{
    using namespace clipp;
    using std::cout;

    bool rec = false, utf16 = false;
    std::string infile = "";
    std::string fmt = "csv";

    auto cli = (
        value("input file", infile),
        option("-r", "--recursive").set(rec).doc("convert files recursively"),
        option("-o") & value("output format", fmt),
        option("-utf16").set(utf16).doc("use UTF-16 encoding")
    );

    if(!parse(argc, argv, cli)) {
        cout << make_man_page(cli, "convert");
    }
    else {
        cout << "input file: " << infile << '\n'
             << "format:     " << fmt << '\n'
             << "recursive:  " << (rec ? "yes\n" : "no\n")
             << "UTF-16:     " << (utf16 ? "yes\n" : "no\n");
    }
	return EXIT_SUCCESS;
}
