
#pragma once

#if defined(BUILD_MONOLITHIC)

#ifdef __cplusplus
extern "C" {
#endif

int clipp_actions_main(int argc, const char** argv);
int clipp_align_main(int argc, const char** argv);
int clipp_alternatives_main(int argc, const char** argv);
int clipp_annotate_main(int argc, const char** argv);
int clipp_argv0_main(int argc, const char** argv);
int clipp_commands_main(int argc, const char** argv);
int clipp_complex_nesting_main(int argc, const char** argv);
int clipp_convert_main(int argc, const char** argv);
int clipp_counter_main(int argc, const char** argv);
int clipp_doc_filter_main(int argc, const char** argv);
int clipp_documentation_main(int argc, const char** argv);
int clipp_finder_main(int argc, const char** argv);
int clipp_float_vector_main(int argc, const char** argv);
int clipp_groups_main(int argc, const char** argv);
int clipp_joinable_flags_main(int argc, const char** argv);
int clipp_model_main(int argc, const char** argv);
int clipp_naval_fate_main(int argc, const char** argv);
int clipp_nested_alternatives_main(int argc, const char** argv);
int clipp_numbers_main(int argc, const char** argv);
int clipp_options_main(int argc, const char** argv);
int clipp_options_values_main(int argc, const char** argv);
int clipp_optionals_main(int argc, const char** argv);
int clipp_parsing_main(int argc, const char** argv);
int clipp_positional_values_main(int argc, const char** argv);
int clipp_repeatable_main(int argc, const char** argv);
int clipp_required_flags_main(int argc, const char** argv);
int clipp_sanity_main(void);
int clipp_send_main(int argc, const char** argv);
int clipp_simplify_main(int argc, const char** argv);
int clipp_switches_main(int argc, const char** argv);
int clipp_tagnames_main(int argc, const char** argv);
int clipp_text_formatting_main(int argc, const char** argv);
int clipp_timing_main(int argc, const char** argv);
int clipp_transform_main(int argc, const char** argv);

#ifdef __cplusplus
}
#endif

#endif
