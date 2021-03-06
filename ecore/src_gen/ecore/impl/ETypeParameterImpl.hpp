//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_ETYPEPARAMETERETYPEPARAMETERIMPL_HPP
#define ECORE_ETYPEPARAMETERETYPEPARAMETERIMPL_HPP

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

//*********************************
// generated Includes

//Model includes
#include "../ETypeParameter.hpp"

#include "impl/ENamedElementImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace ecore 
{
	class ETypeParameterImpl :virtual public ENamedElementImpl, virtual public ETypeParameter 
	{
		public: 
			ETypeParameterImpl(const ETypeParameterImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ETypeParameterImpl& operator=(ETypeParameterImpl const&) = delete;

		protected:
			friend class EcoreFactoryImpl;
			ETypeParameterImpl();



		public:
			//destructor
			virtual ~ETypeParameterImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr< Bag<ecore::EGenericType> > getEBounds() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: ECORE_ETYPEPARAMETERETYPEPARAMETERIMPL_HPP */

