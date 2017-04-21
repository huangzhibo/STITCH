// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// get_header_using_SeqLib
std::string get_header_using_SeqLib(std::string file_name);
RcppExport SEXP STITCH_get_header_using_SeqLib(SEXP file_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type file_name(file_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(get_header_using_SeqLib(file_name));
    return rcpp_result_gen;
END_RCPP
}
// get_read_span
int get_read_span(std::vector<int> cigarLengthVec, std::vector<std::string> cigarTypeVec);
RcppExport SEXP STITCH_get_read_span(SEXP cigarLengthVecSEXP, SEXP cigarTypeVecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type cigarLengthVec(cigarLengthVecSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type cigarTypeVec(cigarTypeVecSEXP);
    rcpp_result_gen = Rcpp::wrap(get_read_span(cigarLengthVec, cigarTypeVec));
    return rcpp_result_gen;
END_RCPP
}
// cpp_cigar_split_many
Rcpp::List cpp_cigar_split_many(std::vector <std::string> strings);
RcppExport SEXP STITCH_cpp_cigar_split_many(SEXP stringsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector <std::string> >::type strings(stringsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_cigar_split_many(strings));
    return rcpp_result_gen;
END_RCPP
}
// cpp_deal_with_soft_clipped_bases
Rcpp::List cpp_deal_with_soft_clipped_bases(Rcpp::List splitCigarRead, bool useSoftClippedBases, int posRead, std::string seqRead, std::string qualRead);
RcppExport SEXP STITCH_cpp_deal_with_soft_clipped_bases(SEXP splitCigarReadSEXP, SEXP useSoftClippedBasesSEXP, SEXP posReadSEXP, SEXP seqReadSEXP, SEXP qualReadSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type splitCigarRead(splitCigarReadSEXP);
    Rcpp::traits::input_parameter< bool >::type useSoftClippedBases(useSoftClippedBasesSEXP);
    Rcpp::traits::input_parameter< int >::type posRead(posReadSEXP);
    Rcpp::traits::input_parameter< std::string >::type seqRead(seqReadSEXP);
    Rcpp::traits::input_parameter< std::string >::type qualRead(qualReadSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_deal_with_soft_clipped_bases(splitCigarRead, useSoftClippedBases, posRead, seqRead, qualRead));
    return rcpp_result_gen;
END_RCPP
}
// get_sample_data_from_SeqLib
Rcpp::List get_sample_data_from_SeqLib(std::string region, std::string file_name, std::string reference);
RcppExport SEXP STITCH_get_sample_data_from_SeqLib(SEXP regionSEXP, SEXP file_nameSEXP, SEXP referenceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type region(regionSEXP);
    Rcpp::traits::input_parameter< std::string >::type file_name(file_nameSEXP);
    Rcpp::traits::input_parameter< std::string >::type reference(referenceSEXP);
    rcpp_result_gen = Rcpp::wrap(get_sample_data_from_SeqLib(region, file_name, reference));
    return rcpp_result_gen;
END_RCPP
}
// get_sampleReadsRaw_from_SeqLib
Rcpp::List get_sampleReadsRaw_from_SeqLib(const bool useSoftClippedBases, const int bqFilter, const int iSizeUpperLimit, const std::vector<std::string> ref, const std::vector<std::string> alt, const int T, const std::vector<int> L, std::string region, std::string file_name, std::string reference);
RcppExport SEXP STITCH_get_sampleReadsRaw_from_SeqLib(SEXP useSoftClippedBasesSEXP, SEXP bqFilterSEXP, SEXP iSizeUpperLimitSEXP, SEXP refSEXP, SEXP altSEXP, SEXP TSEXP, SEXP LSEXP, SEXP regionSEXP, SEXP file_nameSEXP, SEXP referenceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const bool >::type useSoftClippedBases(useSoftClippedBasesSEXP);
    Rcpp::traits::input_parameter< const int >::type bqFilter(bqFilterSEXP);
    Rcpp::traits::input_parameter< const int >::type iSizeUpperLimit(iSizeUpperLimitSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string> >::type ref(refSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string> >::type alt(altSEXP);
    Rcpp::traits::input_parameter< const int >::type T(TSEXP);
    Rcpp::traits::input_parameter< const std::vector<int> >::type L(LSEXP);
    Rcpp::traits::input_parameter< std::string >::type region(regionSEXP);
    Rcpp::traits::input_parameter< std::string >::type file_name(file_nameSEXP);
    Rcpp::traits::input_parameter< std::string >::type reference(referenceSEXP);
    rcpp_result_gen = Rcpp::wrap(get_sampleReadsRaw_from_SeqLib(useSoftClippedBases, bqFilter, iSizeUpperLimit, ref, alt, T, L, region, file_name, reference));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_make_sampleReads_from_hap
Rcpp::List rcpp_make_sampleReads_from_hap(const Rcpp::IntegerVector non_NA_cols, const int reference_phred, const Rcpp::IntegerVector reference_hap);
RcppExport SEXP STITCH_rcpp_make_sampleReads_from_hap(SEXP non_NA_colsSEXP, SEXP reference_phredSEXP, SEXP reference_hapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector >::type non_NA_cols(non_NA_colsSEXP);
    Rcpp::traits::input_parameter< const int >::type reference_phred(reference_phredSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector >::type reference_hap(reference_hapSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_make_sampleReads_from_hap(non_NA_cols, reference_phred, reference_hap));
    return rcpp_result_gen;
END_RCPP
}
// increment2N
Rcpp::NumericVector increment2N(int yT, int xT, Rcpp::NumericVector y, Rcpp::NumericVector z);
RcppExport SEXP STITCH_increment2N(SEXP yTSEXP, SEXP xTSEXP, SEXP ySEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type yT(yTSEXP);
    Rcpp::traits::input_parameter< int >::type xT(xTSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(increment2N(yT, xT, y, z));
    return rcpp_result_gen;
END_RCPP
}
// pseudoHaploid_update_model_9
Rcpp::List pseudoHaploid_update_model_9(const arma::vec& pRgivenH1, const arma::vec& pRgivenH2, const arma::mat& eMatHap_t1, const arma::mat& eMatHap_t2, const arma::mat& gamma_t1, const arma::mat& gamma_t2, const int K, const arma::ivec& srp);
RcppExport SEXP STITCH_pseudoHaploid_update_model_9(SEXP pRgivenH1SEXP, SEXP pRgivenH2SEXP, SEXP eMatHap_t1SEXP, SEXP eMatHap_t2SEXP, SEXP gamma_t1SEXP, SEXP gamma_t2SEXP, SEXP KSEXP, SEXP srpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type pRgivenH1(pRgivenH1SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type pRgivenH2(pRgivenH2SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type eMatHap_t1(eMatHap_t1SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type eMatHap_t2(eMatHap_t2SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type gamma_t1(gamma_t1SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type gamma_t2(gamma_t2SEXP);
    Rcpp::traits::input_parameter< const int >::type K(KSEXP);
    Rcpp::traits::input_parameter< const arma::ivec& >::type srp(srpSEXP);
    rcpp_result_gen = Rcpp::wrap(pseudoHaploid_update_model_9(pRgivenH1, pRgivenH2, eMatHap_t1, eMatHap_t2, gamma_t1, gamma_t2, K, srp));
    return rcpp_result_gen;
END_RCPP
}
// forwardBackwardDiploid
Rcpp::List forwardBackwardDiploid(const Rcpp::List& sampleReads, const int nReads, const arma::vec& pi, const arma::mat& transMatRate_t, const arma::mat& alphaMat_t, const arma::mat& eHaps_t, const double maxDifferenceBetweenReads, const int whatToReturn, const int Jmax, const int suppressOutput);
RcppExport SEXP STITCH_forwardBackwardDiploid(SEXP sampleReadsSEXP, SEXP nReadsSEXP, SEXP piSEXP, SEXP transMatRate_tSEXP, SEXP alphaMat_tSEXP, SEXP eHaps_tSEXP, SEXP maxDifferenceBetweenReadsSEXP, SEXP whatToReturnSEXP, SEXP JmaxSEXP, SEXP suppressOutputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type sampleReads(sampleReadsSEXP);
    Rcpp::traits::input_parameter< const int >::type nReads(nReadsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type pi(piSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type transMatRate_t(transMatRate_tSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type alphaMat_t(alphaMat_tSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type eHaps_t(eHaps_tSEXP);
    Rcpp::traits::input_parameter< const double >::type maxDifferenceBetweenReads(maxDifferenceBetweenReadsSEXP);
    Rcpp::traits::input_parameter< const int >::type whatToReturn(whatToReturnSEXP);
    Rcpp::traits::input_parameter< const int >::type Jmax(JmaxSEXP);
    Rcpp::traits::input_parameter< const int >::type suppressOutput(suppressOutputSEXP);
    rcpp_result_gen = Rcpp::wrap(forwardBackwardDiploid(sampleReads, nReads, pi, transMatRate_t, alphaMat_t, eHaps_t, maxDifferenceBetweenReads, whatToReturn, Jmax, suppressOutput));
    return rcpp_result_gen;
END_RCPP
}
// forwardBackwardHaploid
Rcpp::List forwardBackwardHaploid(const Rcpp::List& sampleReads, const int nReads, const arma::vec pi, const arma::mat& transMatRate_t, const arma::mat& alphaMat_t, const arma::mat& eHaps_t, const double maxDifferenceBetweenReads, const int whatToReturn, const int Jmax, const int suppressOutput, const int model, const arma::vec& pRgivenH1, const arma::vec& pRgivenH2, arma::mat pState);
RcppExport SEXP STITCH_forwardBackwardHaploid(SEXP sampleReadsSEXP, SEXP nReadsSEXP, SEXP piSEXP, SEXP transMatRate_tSEXP, SEXP alphaMat_tSEXP, SEXP eHaps_tSEXP, SEXP maxDifferenceBetweenReadsSEXP, SEXP whatToReturnSEXP, SEXP JmaxSEXP, SEXP suppressOutputSEXP, SEXP modelSEXP, SEXP pRgivenH1SEXP, SEXP pRgivenH2SEXP, SEXP pStateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type sampleReads(sampleReadsSEXP);
    Rcpp::traits::input_parameter< const int >::type nReads(nReadsSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type pi(piSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type transMatRate_t(transMatRate_tSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type alphaMat_t(alphaMat_tSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type eHaps_t(eHaps_tSEXP);
    Rcpp::traits::input_parameter< const double >::type maxDifferenceBetweenReads(maxDifferenceBetweenReadsSEXP);
    Rcpp::traits::input_parameter< const int >::type whatToReturn(whatToReturnSEXP);
    Rcpp::traits::input_parameter< const int >::type Jmax(JmaxSEXP);
    Rcpp::traits::input_parameter< const int >::type suppressOutput(suppressOutputSEXP);
    Rcpp::traits::input_parameter< const int >::type model(modelSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type pRgivenH1(pRgivenH1SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type pRgivenH2(pRgivenH2SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type pState(pStateSEXP);
    rcpp_result_gen = Rcpp::wrap(forwardBackwardHaploid(sampleReads, nReads, pi, transMatRate_t, alphaMat_t, eHaps_t, maxDifferenceBetweenReads, whatToReturn, Jmax, suppressOutput, model, pRgivenH1, pRgivenH2, pState));
    return rcpp_result_gen;
END_RCPP
}
// cpp_read_reassign
List cpp_read_reassign(arma::ivec ord, arma::ivec qnameInteger_ord, List sampleReadsRaw, int verbose);
RcppExport SEXP STITCH_cpp_read_reassign(SEXP ordSEXP, SEXP qnameInteger_ordSEXP, SEXP sampleReadsRawSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::ivec >::type ord(ordSEXP);
    Rcpp::traits::input_parameter< arma::ivec >::type qnameInteger_ord(qnameInteger_ordSEXP);
    Rcpp::traits::input_parameter< List >::type sampleReadsRaw(sampleReadsRawSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_read_reassign(ord, qnameInteger_ord, sampleReadsRaw, verbose));
    return rcpp_result_gen;
END_RCPP
}
