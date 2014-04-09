/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include <openssl/dh.h>
/* Header for class edu_biu_scapi_primitives_dlog_openSSL_OpenSSLDlogZpSafePrime */

#ifndef _Included_edu_biu_scapi_primitives_dlog_openSSL_OpenSSLDlogZpSafePrime
#define _Included_edu_biu_scapi_primitives_dlog_openSSL_OpenSSLDlogZpSafePrime
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     edu_biu_scapi_primitives_dlog_openSSL_OpenSSLDlogZpSafePrime
 * Method:    createDlogZp
 * Signature: ([B[B[B)J
 */
JNIEXPORT jlong JNICALL Java_edu_biu_scapi_primitives_dlog_openSSL_OpenSSLDlogZpSafePrime_createDlogZp
  (JNIEnv *, jobject, jbyteArray, jbyteArray, jbyteArray);

/*
 * Class:     edu_biu_scapi_primitives_dlog_openSSL_OpenSSLDlogZpSafePrime
 * Method:    createRandomDlogZp
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_edu_biu_scapi_primitives_dlog_openSSL_OpenSSLDlogZpSafePrime_createRandomDlogZp
  (JNIEnv *, jobject, jint);

/*
 * Class:     edu_biu_scapi_primitives_dlog_openSSL_OpenSSLDlogZpSafePrime
 * Method:    getGenerator
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_edu_biu_scapi_primitives_dlog_openSSL_OpenSSLDlogZpSafePrime_getGenerator
  (JNIEnv *, jobject, jlong);

/*
 * Class:     edu_biu_scapi_primitives_dlog_openSSL_OpenSSLDlogZpSafePrime
 * Method:    getP
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_edu_biu_scapi_primitives_dlog_openSSL_OpenSSLDlogZpSafePrime_getP
  (JNIEnv *, jobject, jlong);

/*
 * Class:     edu_biu_scapi_primitives_dlog_openSSL_OpenSSLDlogZpSafePrime
 * Method:    getQ
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_edu_biu_scapi_primitives_dlog_openSSL_OpenSSLDlogZpSafePrime_getQ
  (JNIEnv *, jobject, jlong);

/*
 * Class:     edu_biu_scapi_primitives_dlog_openSSL_OpenSSLDlogZpSafePrime
 * Method:    inverseElement
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_edu_biu_scapi_primitives_dlog_openSSL_OpenSSLDlogZpSafePrime_inverseElement
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     edu_biu_scapi_primitives_dlog_openSSL_OpenSSLDlogZpSafePrime
 * Method:    exponentiateElement
 * Signature: (JJ[B)J
 */
JNIEXPORT jlong JNICALL Java_edu_biu_scapi_primitives_dlog_openSSL_OpenSSLDlogZpSafePrime_exponentiateElement
  (JNIEnv *, jobject, jlong, jlong, jbyteArray);

/*
 * Class:     edu_biu_scapi_primitives_dlog_openSSL_OpenSSLDlogZpSafePrime
 * Method:    multiplyElements
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_edu_biu_scapi_primitives_dlog_openSSL_OpenSSLDlogZpSafePrime_multiplyElements
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     edu_biu_scapi_primitives_dlog_openSSL_OpenSSLDlogZpSafePrime
 * Method:    deleteDlogZp
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_edu_biu_scapi_primitives_dlog_openSSL_OpenSSLDlogZpSafePrime_deleteDlogZp
  (JNIEnv *, jobject, jlong);

/*
 * Class:     edu_biu_scapi_primitives_dlog_openSSL_OpenSSLDlogZpSafePrime
 * Method:    validateZpGroup
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_edu_biu_scapi_primitives_dlog_openSSL_OpenSSLDlogZpSafePrime_validateZpGroup
  (JNIEnv *, jobject, jlong);

/*
 * Class:     edu_biu_scapi_primitives_dlog_openSSL_OpenSSLDlogZpSafePrime
 * Method:    validateZpGenerator
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_edu_biu_scapi_primitives_dlog_openSSL_OpenSSLDlogZpSafePrime_validateZpGenerator
  (JNIEnv *, jobject, jlong);

/*
 * Class:     edu_biu_scapi_primitives_dlog_openSSL_OpenSSLDlogZpSafePrime
 * Method:    validateZpElement
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_edu_biu_scapi_primitives_dlog_openSSL_OpenSSLDlogZpSafePrime_validateZpElement
  (JNIEnv *, jobject, jlong, jlong);

#ifdef __cplusplus
}

class DlogZp {
private:

	DH* dlog;
	BN_CTX* ctx;
public:

	DlogZp(DH* dlog, BN_CTX* ctx);
	~DlogZp();

	DH* getDlog();
	BN_CTX* getCTX();
	bool validateElement(BIGNUM* element);
};

#endif
#endif