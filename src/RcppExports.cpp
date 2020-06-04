// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "harmony_types.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// update_dist_mat
void update_dist_mat(MATTYPE& dist_mat, const MATTYPE& Y, const MATTYPE& Z_cos);
RcppExport SEXP _harmony_update_dist_mat(SEXP dist_matSEXP, SEXP YSEXP, SEXP Z_cosSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< MATTYPE& >::type dist_mat(dist_matSEXP);
    Rcpp::traits::input_parameter< const MATTYPE& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const MATTYPE& >::type Z_cos(Z_cosSEXP);
    update_dist_mat(dist_mat, Y, Z_cos);
    return R_NilValue;
END_RCPP
}
// scaleRows_dgc
MATTYPE scaleRows_dgc(const VECTYPE& x, const VECTYPE& p, const VECTYPE& i, int ncol, int nrow, float thresh);
RcppExport SEXP _harmony_scaleRows_dgc(SEXP xSEXP, SEXP pSEXP, SEXP iSEXP, SEXP ncolSEXP, SEXP nrowSEXP, SEXP threshSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const VECTYPE& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const VECTYPE& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const VECTYPE& >::type i(iSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< float >::type thresh(threshSEXP);
    rcpp_result_gen = Rcpp::wrap(scaleRows_dgc(x, p, i, ncol, nrow, thresh));
    return rcpp_result_gen;
END_RCPP
}
// soft_kmeans_score_cpp
double soft_kmeans_score_cpp(const arma::mat& R, const arma::rowvec& w, const arma::mat& dist_mat, float sigma);
RcppExport SEXP _harmony_soft_kmeans_score_cpp(SEXP RSEXP, SEXP wSEXP, SEXP dist_matSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type R(RSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type dist_mat(dist_matSEXP);
    Rcpp::traits::input_parameter< float >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(soft_kmeans_score_cpp(R, w, dist_mat, sigma));
    return rcpp_result_gen;
END_RCPP
}
// soft_kmeans_weighted_cpp
List soft_kmeans_weighted_cpp(arma::mat Y, arma::mat Z, const arma::rowvec& w, unsigned max_iter, float sigma, float tol);
RcppExport SEXP _harmony_soft_kmeans_weighted_cpp(SEXP YSEXP, SEXP ZSEXP, SEXP wSEXP, SEXP max_iterSEXP, SEXP sigmaSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< unsigned >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< float >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< float >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(soft_kmeans_weighted_cpp(Y, Z, w, max_iter, sigma, tol));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_harmony_module();

static const R_CallMethodDef CallEntries[] = {
    {"_harmony_update_dist_mat", (DL_FUNC) &_harmony_update_dist_mat, 3},
    {"_harmony_scaleRows_dgc", (DL_FUNC) &_harmony_scaleRows_dgc, 6},
    {"_harmony_soft_kmeans_score_cpp", (DL_FUNC) &_harmony_soft_kmeans_score_cpp, 4},
    {"_harmony_soft_kmeans_weighted_cpp", (DL_FUNC) &_harmony_soft_kmeans_weighted_cpp, 6},
    {"_rcpp_module_boot_harmony_module", (DL_FUNC) &_rcpp_module_boot_harmony_module, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_harmony(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
