// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// mgrs_to_latlng
NumericVector mgrs_to_latlng(std::string MGRS, bool degrees);
RcppExport SEXP mgrs_mgrs_to_latlng(SEXP MGRSSEXP, SEXP degreesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type MGRS(MGRSSEXP);
    Rcpp::traits::input_parameter< bool >::type degrees(degreesSEXP);
    rcpp_result_gen = Rcpp::wrap(mgrs_to_latlng(MGRS, degrees));
    return rcpp_result_gen;
END_RCPP
}
// latlng_to_mgrs
std::string latlng_to_mgrs(double latitude, double longitude, bool degrees, int precision);
RcppExport SEXP mgrs_latlng_to_mgrs(SEXP latitudeSEXP, SEXP longitudeSEXP, SEXP degreesSEXP, SEXP precisionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type latitude(latitudeSEXP);
    Rcpp::traits::input_parameter< double >::type longitude(longitudeSEXP);
    Rcpp::traits::input_parameter< bool >::type degrees(degreesSEXP);
    Rcpp::traits::input_parameter< int >::type precision(precisionSEXP);
    rcpp_result_gen = Rcpp::wrap(latlng_to_mgrs(latitude, longitude, degrees, precision));
    return rcpp_result_gen;
END_RCPP
}