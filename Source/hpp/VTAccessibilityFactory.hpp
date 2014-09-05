﻿// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'VTAccessibilityFactory.pas' rev: 28.00 (Windows)

#ifndef VtaccessibilityfactoryHPP
#define VtaccessibilityfactoryHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.oleacc.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <VirtualTrees.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Vtaccessibilityfactory
{
//-- type declarations -------------------------------------------------------
__interface IVTAccessibleProvider;
typedef System::DelphiInterface<IVTAccessibleProvider> _di_IVTAccessibleProvider;
__interface IVTAccessibleProvider  : public System::IInterface 
{
	
public:
	virtual _di_IAccessible __fastcall CreateIAccessible(Virtualtrees::TBaseVirtualTree* ATree) = 0 ;
};

class DELPHICLASS TVTAccessibilityFactory;
class PASCALIMPLEMENTATION TVTAccessibilityFactory : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	static bool FAccessibilityAvailable;
	static TVTAccessibilityFactory* FVTAccessibleFactory;
	System::Classes::TInterfaceList* FAccessibleProviders;
	
private:
	__classmethod void __fastcall FreeFactory();
	
public:
	__fastcall TVTAccessibilityFactory(void);
	__fastcall virtual ~TVTAccessibilityFactory(void);
	_di_IAccessible __fastcall CreateIAccessible(Virtualtrees::TBaseVirtualTree* ATree);
	static TVTAccessibilityFactory* __fastcall GetAccessibilityFactory();
	void __fastcall RegisterAccessibleProvider(_di_IVTAccessibleProvider AProvider);
	void __fastcall UnRegisterAccessibleProvider(_di_IVTAccessibleProvider AProvider);
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Vtaccessibilityfactory */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VTACCESSIBILITYFACTORY)
using namespace Vtaccessibilityfactory;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// VtaccessibilityfactoryHPP
