/*****************************************************************************
 VBase Copyright (c) 2015. All Rights Reserved.

 FileName: test_dictionary.h
 Version: 1.0
 Date: 2015.9.25

 History:
 jeffguo     2015.9.25   1.0     Create
 ******************************************************************************/

#include "test_aes.h"
#include <stdio.h>
#include "base/aes.h"

using namespace base;

test_aes::test_aes()
{

}

test_aes::~test_aes()
{

}

void test_aes::test_single_aes()
{
	base::aes a;
	//a.set_encrypt_key("jkfd0987654321po", 128);
	//a.set_decrypt_key("jkfd0987654321po", 128);
	std::string eostr = "123456";
	std::string ecipher = a.encrypt_as_base64(eostr.c_str(), eostr.length());
	std::string eplain = a.decrypt_base64(ecipher.c_str(), ecipher.length());
	printf("eostr:   %s, %d\n", eostr.c_str(), eostr.length());
	printf("ecipher: %s, %d\n", ecipher.c_str(), ecipher.length());
	printf("eplain:  %s, %d, %d\n", eplain.c_str(), eplain.length(), eplain.at(1));
}
