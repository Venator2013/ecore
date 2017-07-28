//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECOREPLUGIN_HPP
#define ECOREPLUGIN_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#include "EcoreModelPlugin.hpp"

namespace ecore
{
	class EcorePlugin : virtual public EcoreModelPlugin
	{
		public:
			static std::shared_ptr<MDE4CPPPlugin> eInstance();
	
			virtual std::string eNAME() = 0;
			virtual std::string eNS_URI() = 0;
			virtual std::string eNS_PREFIX() = 0;
	
			virtual std::shared_ptr<ecore::EFactory> getFactory() = 0;
			virtual std::shared_ptr<ecore::EPackage> getPackage() = 0;
	
		protected:
			EcorePlugin(){};
			virtual ~EcorePlugin(){};
	
		private:
			static std::shared_ptr<MDE4CPPPlugin> instance;
	};
}
#endif /* end of include guard: ECOREPLUGIN_HPP */

