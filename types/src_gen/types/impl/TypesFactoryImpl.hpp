//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef TYPESFACTORYIMPL_HPP
#define TYPESFACTORYIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

#include "impl/EFactoryImpl.hpp"


#include "TypesFactory.hpp"

namespace types 
{
	class TypesFactoryImpl : virtual public ecore::EFactoryImpl , virtual public TypesFactory 
	{
		private:    
			TypesFactoryImpl(TypesFactoryImpl const&) = delete;
			TypesFactoryImpl& operator=(TypesFactoryImpl const&) = delete;

		protected:
			friend class TypesFactory;
			// Constructor
			TypesFactoryImpl();

		public:
			virtual ~TypesFactoryImpl();
			virtual std::shared_ptr<ecore::EObject> create(std::string _className,  std::shared_ptr<ecore::EObject> container, const unsigned int referenceID = -1) const;
			virtual std::shared_ptr<ecore::EObject> create(const unsigned int classID,  std::shared_ptr<ecore::EObject> container = nullptr, const unsigned int referenceID = -1) const;
			virtual std::shared_ptr<ecore::EObject> create(std::shared_ptr<ecore::EClass> _class, std::shared_ptr<EObject> _container = nullptr) const;
			virtual std::shared_ptr<ecore::EObject> create(std::string _className) const;

			//Creator functions
			

			//Package
			virtual std::shared_ptr<TypesPackage> getTypesPackage() const;

		private:
			static TypesFactory* create();
            std::map<std::string,unsigned int> m_idMap;
			virtual void init() {}

	};
}
#endif /* end of include guard: TYPESFACTORYIMPL_HPP */

