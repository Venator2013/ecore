//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_ETYPEDELEMENTETYPEDELEMENTIMPL_HPP
#define ECORE_ETYPEDELEMENTETYPEDELEMENTIMPL_HPP

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
#include "../ETypedElement.hpp"

#include "impl/ENamedElementImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace ecore 
{
	class ETypedElementImpl :virtual public ENamedElementImpl, virtual public ETypedElement 
	{
		public: 
			ETypedElementImpl(const ETypedElementImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ETypedElementImpl& operator=(ETypedElementImpl const&) = delete;

		protected:
			friend class EcoreFactoryImpl;
			ETypedElementImpl();



		public:
			//destructor
			virtual ~ETypedElementImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual bool isOrdered() const ;
			
			/*!
			 */ 
			virtual void setOrdered (bool _ordered); 
			
			/*!
			 */ 
			virtual bool isUnique() const ;
			
			/*!
			 */ 
			virtual void setUnique (bool _unique); 
			
			/*!
			 */ 
			virtual int getLowerBound() const ;
			
			/*!
			 */ 
			virtual void setLowerBound (int _lowerBound); 
			
			/*!
			 */ 
			virtual int getUpperBound() const ;
			
			/*!
			 */ 
			virtual void setUpperBound (int _upperBound); 
			
			/*!
			 */ 
			virtual bool isMany() const ;
			
			/*!
			 */ 
			virtual bool isRequired() const ;
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<ecore::EClassifier > getEType() const ;
			
			/*!
			 */
			virtual void setEType(std::shared_ptr<ecore::EClassifier> _eType_eType) ;
			/*!
			 */
			virtual std::shared_ptr<ecore::EGenericType > getEGenericType() const ;
			
			/*!
			 */
			virtual void setEGenericType(std::shared_ptr<ecore::EGenericType> _eGenericType_eGenericType) ;
							
			
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
#endif /* end of include guard: ECORE_ETYPEDELEMENTETYPEDELEMENTIMPL_HPP */

