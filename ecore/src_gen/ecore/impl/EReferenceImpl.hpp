//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_EREFERENCEEREFERENCEIMPL_HPP
#define ECORE_EREFERENCEEREFERENCEIMPL_HPP

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
#include "../EReference.hpp"

#include "impl/EStructuralFeatureImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace ecore 
{
	class EReferenceImpl :virtual public EStructuralFeatureImpl, virtual public EReference 
	{
		public: 
			EReferenceImpl(const EReferenceImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			EReferenceImpl& operator=(EReferenceImpl const&) = delete;

		protected:
			friend class EcoreFactoryImpl;
			EReferenceImpl();

			//Additional constructors for the containments back reference
			EReferenceImpl(std::weak_ptr<ecore::EClass > par_eContainingClass);




		public:
			//destructor
			virtual ~EReferenceImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual bool isContainer() const ;
			
			/*!
			 */ 
			virtual bool isContainment() const ;
			
			/*!
			 */ 
			virtual void setContainment (bool _containment); 
			
			/*!
			 */ 
			virtual bool isResolveProxies() const ;
			
			/*!
			 */ 
			virtual void setResolveProxies (bool _resolveProxies); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr< Bag<ecore::EAttribute> > getEKeys() const ;
			
			/*!
			 */
			virtual std::shared_ptr<ecore::EReference > getEOpposite() const ;
			
			/*!
			 */
			virtual void setEOpposite(std::shared_ptr<ecore::EReference> _eOpposite_eOpposite) ;
			/*!
			 */
			virtual std::shared_ptr<ecore::EClass > getEReferenceType() const ;
			
							
			
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
#endif /* end of include guard: ECORE_EREFERENCEEREFERENCEIMPL_HPP */

