// ???????????? ???? ???????? ???????? ??? ?????? ??????? ?????????? 1?

#ifndef v8cf_extcompH
#define v8cf_extcompH

struct param{
	int type; // ??? ?????????? (??? VARIANT)
	bool hasDefValue; // ???????? ????? ???????? ?? ?????????
	Variant DefValue; // ???????? ?? ????????? (Unassigned, ???? ???????? ?? ????????? ???)
	param(int _type) : type(_type), hasDefValue(false), DefValue(){};
	param(int _type, char* df) : type(_type), hasDefValue(true)
	{
		DefValue = df;
	};
	param(int _type, int df) : type(_type), hasDefValue(true)
	{
		DefValue = df;
	};
	param(int _type, bool df) : type(_type), hasDefValue(true)
	{
		DefValue = df;
	};
};

struct method{
	AnsiString name; // ??? ??????
	AnsiString synonym; // ?????????? ??????? ??????
	bool hasRetVal; // ????? ????? ???????????? ????????
	int nParam; // ?????????? ?????????? ??????
	param* params; // ?????? ?????????? ??????
	method(char* n, char* s, bool h, int np, param* p) : name(n), synonym(s), hasRetVal(h), nParam(np), params(p){};
};

struct property{
	AnsiString name; // ??? ????????
	AnsiString synonym; // ?????????? ??????? ????????
	bool readable; // ???????? ??????????
	bool writable; // ???????? ???????????
	property(char* n, char* s, bool r, bool w) : name(n), synonym(s), readable(r), writable(w){};
};

enum TypeOfFiles{
	tof_unknown = 0,
	tof_utf8 = 1,
	tof_mxl810 = 2,
	tof_mxl811 = 3,
	tof_bin21 = 4
};

/*
	UTF-32, big-endian     00 00 FE FF
	UTF-32, little-endian  FF FE 00 00
	UTF-16, big-endian     FE FF
	UTF-16, little-endian  FF FE
	UTF-8                  EF BB BF
*/
#endif //v8cf_extcompH

