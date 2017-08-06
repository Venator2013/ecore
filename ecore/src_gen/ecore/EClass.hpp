//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_ECLASS_HPP
#define ECORE_ECLASS_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) /**/
#else
    #define ACT_DEBUG(a) a
#endif

#include <string>
#include <map>
#include <vector>
#include "SubsetUnion.hpp"
#include "boost/shared_ptr.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
namespace ecore 
{
	class EAnnotation;
}

namespace ecore 
{
	class EAttribute;
}

namespace ecore 
{
	class EClass;
}

namespace ecore 
{
	class EClassifier;
}

namespace ecore 
{
	class EGenericType;
}

namespace ecore 
{
	class EOperation;
}

namespace ecore 
{
	class EPackage;
}

namespace ecore 
{
	class EReference;
}

namespace ecore 
{
	class EStructuralFeature;
}

namespace ecore 
{
	class ETypeParameter;
}

// base class includes
#include "EClassifier.hpp"

// enum includes


//*********************************
namespace ecore 
{
	/*!
	 */
	class EClass:virtual public EClassifier	{
		public:
 			EClass(const EClass &) {}
			EClass& operator=(EClass const&) = delete;
	
		protected:
			EClass(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~EClass() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual bool
			 isSuperTypeOf(std::shared_ptr<ecore::EClass>  someClass)  const  = 0;
			
			/*!
			 */ 
			virtual int
			 getFeatureCount()  const  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EStructuralFeature> 
			 getEStructuralFeature(int featureID)  const  = 0;
			
			/*!
			 */ 
			virtual int
			 getFeatureID(std::shared_ptr<ecore::EStructuralFeature>  feature)  const  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EStructuralFeature> 
			 getEStructuralFeature(std::string featureName)  const  = 0;
			
			/*!
			 */ 
			virtual int
			 getOperationCount()  const  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EOperation> 
			 getEOperation(int operationID)  const  = 0;
			
			/*!
			 */ 
			virtual int
			 getOperationID(std::shared_ptr<ecore::EOperation>  operation)  const  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EOperation> 
			 getOverride(std::shared_ptr<ecore::EOperation>  operation)  const  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EGenericType> 
			 getFeatureType(std::shared_ptr<ecore::EStructuralFeature>  feature)  const  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual bool isAbstract() const = 0;
			
			/*!
			 */ 
			virtual void setAbstract (bool _abstract)= 0; 
			
			/*!
			 */ 
			virtual bool isInterface() const = 0;
			
			/*!
			 */ 
			virtual void setInterface (bool _interface)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual 	std::shared_ptr< Bag<ecore::EClass> >
			 getESuperTypes() const = 0;
			
			/*!
			 */
			virtual 	std::shared_ptr< Bag<ecore::EOperation> >
			 getEOperations() const = 0;
			
			/*!
			 */
			virtual 	std::shared_ptr< Bag<ecore::EAttribute> >
			 getEAllAttributes() const = 0;
			
			/*!
			 */
			virtual 	std::shared_ptr< Bag<ecore::EReference> >
			 getEAllReferences() const = 0;
			
			/*!
			 */
			virtual 		std::shared_ptr<Subset<ecore::EReference, ecore::EStructuralFeature > >
			 getEReferences() const = 0;
			
			/*!
			 */
			virtual 		std::shared_ptr<Subset<ecore::EAttribute, ecore::EStructuralFeature > >
			 getEAttributes() const = 0;
			
			/*!
			 */
			virtual 	std::shared_ptr< Bag<ecore::EReference> >
			 getEAllContainments() const = 0;
			
			/*!
			 */
			virtual 	std::shared_ptr< Bag<ecore::EOperation> >
			 getEAllOperations() const = 0;
			
			/*!
			 */
			virtual 	std::shared_ptr< Bag<ecore::EStructuralFeature> >
			 getEAllStructuralFeatures() const = 0;
			
			/*!
			 */
			virtual 	std::shared_ptr< Bag<ecore::EClass> >
			 getEAllSuperTypes() const = 0;
			
			/*!
			 */
			virtual std::shared_ptr<ecore::EAttribute > getEIDAttribute() const = 0;
			
			
			/*!
			 */
			virtual 	std::shared_ptr< Bag<ecore::EGenericType> >
			 getEGenericSuperTypes() const = 0;
			
			/*!
			 */
			virtual 	std::shared_ptr< Bag<ecore::EGenericType> >
			 getEAllGenericSuperTypes() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 */ 
			bool m_abstract ;
			/*!
			 */ 
			bool m_interface ;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
				std::shared_ptr< Bag<ecore::EClass> >
			 m_eSuperTypes;
			/*!
			 */
				std::shared_ptr< Bag<ecore::EOperation> >
			 m_eOperations;
			/*!
			 */
				std::shared_ptr< Bag<ecore::EAttribute> >
			 m_eAllAttributes;
			/*!
			 */
				std::shared_ptr< Bag<ecore::EReference> >
			 m_eAllReferences;
			/*!
			 */
					std::shared_ptr<Subset<ecore::EReference, ecore::EStructuralFeature > >
			 m_eReferences;
			/*!
			 */
					std::shared_ptr<Subset<ecore::EAttribute, ecore::EStructuralFeature > >
			 m_eAttributes;
			/*!
			 */
				std::shared_ptr< Bag<ecore::EReference> >
			 m_eAllContainments;
			/*!
			 */
				std::shared_ptr< Bag<ecore::EOperation> >
			 m_eAllOperations;
			/*!
			 */
				std::shared_ptr< Bag<ecore::EStructuralFeature> >
			 m_eAllStructuralFeatures;
			/*!
			 */
				std::shared_ptr< Bag<ecore::EClass> >
			 m_eAllSuperTypes;
			/*!
			 */
			std::shared_ptr<ecore::EAttribute > m_eIDAttribute;
			/*!
			 */
					std::shared_ptr<Union<ecore::EStructuralFeature> > m_eStructuralFeatures;
			/*!
			 */
				std::shared_ptr< Bag<ecore::EGenericType> >
			 m_eGenericSuperTypes;
			/*!
			 */
				std::shared_ptr< Bag<ecore::EGenericType> >
			 m_eAllGenericSuperTypes;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 */
			virtual 		std::shared_ptr<Union<ecore::EStructuralFeature> > getEStructuralFeatures() const = 0; 
	};

}
#endif /* end of include guard: ECORE_ECLASS_HPP */
