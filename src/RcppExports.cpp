// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// int_bnjr_discover
List int_bnjr_discover();
RcppExport SEXP _bonjour_int_bnjr_discover() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(int_bnjr_discover());
    return rcpp_result_gen;
END_RCPP
}
// int_bnjr_query_send
List int_bnjr_query_send(std::string svc);
RcppExport SEXP _bonjour_int_bnjr_query_send(SEXP svcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type svc(svcSEXP);
    rcpp_result_gen = Rcpp::wrap(int_bnjr_query_send(svc));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bonjour_int_bnjr_discover", (DL_FUNC) &_bonjour_int_bnjr_discover, 0},
    {"_bonjour_int_bnjr_query_send", (DL_FUNC) &_bonjour_int_bnjr_query_send, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_bonjour(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
