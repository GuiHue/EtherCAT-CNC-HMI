#ifndef CUSTOM_PDO_NAME_H
#define CUSTOM_PDO_NAME_H

//-------------------------------------------------------------------//
//                                                                   //
//     This file has been created by the Easy Configurator tool      //
//                                                                   //
//     Easy Configurator project EtherCATHMISIE.prj
//                                                                   //
//-------------------------------------------------------------------//


#define CUST_BYTE_NUM_OUT	8
#define CUST_BYTE_NUM_IN	32
#define TOT_BYTE_NUM_ROUND_OUT	8
#define TOT_BYTE_NUM_ROUND_IN	32


typedef union												//---- output buffer ----
{
	uint8_t  Byte [TOT_BYTE_NUM_ROUND_OUT];
	struct
	{
		uint8_t     out1_8;
		uint8_t     out9_16;
		uint8_t     out17_24;
		uint8_t     out25_32;
		uint8_t     out33_40;
		uint8_t     out41_48;
		uint8_t     out49_56;
		uint8_t     out57_64;
	}Cust;
} PROCBUFFER_OUT;


typedef union												//---- input buffer ----
{
	uint8_t  Byte [TOT_BYTE_NUM_ROUND_IN];
	struct
	{
		int32_t     enc1;
		int32_t     enc2;
		float       analog1;
		float       analog2;
		float       analog3;
		float       analog4;
		uint8_t     in1_8;
		uint8_t     in9_16;
		uint8_t     in17_24;
		uint8_t     in25_32;
		uint8_t     in33_40;
		uint8_t     in41_48;
		uint8_t     in49_56;
		uint8_t     in57_64;
	}Cust;
} PROCBUFFER_IN;

#endif