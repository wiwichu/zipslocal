
// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the CALCULATOR_EXPORTS
// symbol defined on the command line. this symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// CALCULATOR_API functions as being imported from a DLL, wheras this DLL sees symbols
// defined with this macro as being exported.
#ifdef CALCULATOR_EXPORTS
#define CALCULATOR_API __declspec(dllexport)
#else
#define CALCULATOR_API __declspec(dllimport)
#endif

// This class is exported from the Calculator.dll
class CALCULATOR_API CCalculator {
public:
	CCalculator(void);
	// TODO: add your methods here.
};

extern CALCULATOR_API int nCalculator;

CALCULATOR_API int fnCalculator(void);

