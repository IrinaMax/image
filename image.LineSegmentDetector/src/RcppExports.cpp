// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// detect_line_segments
List detect_line_segments(NumericVector image, int X, int Y, double scale, double sigma_scale, double quant, double ang_th, double log_eps, double density_th, int n_bins, int need_to_union, double union_ang_th, int union_use_NFA, double union_log_eps, double length_threshold, double dist_threshold);
RcppExport SEXP _image_LineSegmentDetector_detect_line_segments(SEXP imageSEXP, SEXP XSEXP, SEXP YSEXP, SEXP scaleSEXP, SEXP sigma_scaleSEXP, SEXP quantSEXP, SEXP ang_thSEXP, SEXP log_epsSEXP, SEXP density_thSEXP, SEXP n_binsSEXP, SEXP need_to_unionSEXP, SEXP union_ang_thSEXP, SEXP union_use_NFASEXP, SEXP union_log_epsSEXP, SEXP length_thresholdSEXP, SEXP dist_thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type image(imageSEXP);
    Rcpp::traits::input_parameter< int >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< double >::type sigma_scale(sigma_scaleSEXP);
    Rcpp::traits::input_parameter< double >::type quant(quantSEXP);
    Rcpp::traits::input_parameter< double >::type ang_th(ang_thSEXP);
    Rcpp::traits::input_parameter< double >::type log_eps(log_epsSEXP);
    Rcpp::traits::input_parameter< double >::type density_th(density_thSEXP);
    Rcpp::traits::input_parameter< int >::type n_bins(n_binsSEXP);
    Rcpp::traits::input_parameter< int >::type need_to_union(need_to_unionSEXP);
    Rcpp::traits::input_parameter< double >::type union_ang_th(union_ang_thSEXP);
    Rcpp::traits::input_parameter< int >::type union_use_NFA(union_use_NFASEXP);
    Rcpp::traits::input_parameter< double >::type union_log_eps(union_log_epsSEXP);
    Rcpp::traits::input_parameter< double >::type length_threshold(length_thresholdSEXP);
    Rcpp::traits::input_parameter< double >::type dist_threshold(dist_thresholdSEXP);
    rcpp_result_gen = Rcpp::wrap(detect_line_segments(image, X, Y, scale, sigma_scale, quant, ang_th, log_eps, density_th, n_bins, need_to_union, union_ang_th, union_use_NFA, union_log_eps, length_threshold, dist_threshold));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_image_LineSegmentDetector_detect_line_segments", (DL_FUNC) &_image_LineSegmentDetector_detect_line_segments, 16},
    {NULL, NULL, 0}
};

RcppExport void R_init_image_LineSegmentDetector(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
