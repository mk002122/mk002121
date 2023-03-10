//---------------------------------------------------------------------------

#ifndef NodeTypesH
#define NodeTypesH

#include <Classes.hpp>
//---------------------------------------------------------------------------
enum node_type{
	nd_empty = 0, // ?????
	nd_string = 1, // ??????
	nd_number = 2, // ?????
	nd_number_exp = 3, // ????? ? ??????????? ???????
	nd_guid = 4, // ?????????? ?????????????
	nd_list = 5, // ??????
	nd_binary = 6, // ???????? ?????? (? ????????? #base64:)
	nd_binary2 = 7, // ???????? ?????? ??????? 8.2 (??? ????????)
	nd_link = 8, // ??????
	nd_binary_d = 9, // ???????? ?????? (? ????????? #data:)
	nd_unknown // ??????????? ???
};

String get_node_type_presentation(node_type type);
//---------------------------------------------------------------------------
#endif
