//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_EPARAMETEREPARAMETERIMPL_HPP
#define ECORE_EPARAMETEREPARAMETERIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#define ACTIVITY_DEBUG_ON

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//*********************************
// generated Includes

//Model includes
#include "../EParameter.hpp"

#include "impl/ETypedElementImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace ecore 
{
	class EParameterImpl :virtual public ETypedElementImpl, virtual public EParameter 
	{
		public: 
			EParameterImpl(const EParameterImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			EParameterImpl& operator=(EParameterImpl const&) = delete;

		protected:
			friend class EcoreFactoryImpl;
			EParameterImpl();

			//Additional constructors for the containments back reference
			EParameterImpl(std::weak_ptr<ecore::EOperation > par_eOperation);




		public:
			//destructor
			virtual ~EParameterImpl();
			
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
			virtual std::weak_ptr<ecore::EOperation > getEOperation() const ;
			
							
			
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
#endif /* end of include guard: ECORE_EPARAMETEREPARAMETERIMPL_HPP */

