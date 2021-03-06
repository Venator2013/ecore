//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_EPACKAGE_HPP
#define ECORE_EPACKAGE_HPP

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
	class EDataType;
}

namespace ecore 
{
	class EEnum;
}

namespace ecore 
{
	class EFactory;
}

namespace ecore 
{
	class ENamedElement;
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
	class EParameter;
}

namespace ecore 
{
	class EReference;
}

namespace ecore 
{
	class EStructuralFeature;
}

// base class includes
#include "ENamedElement.hpp"

// enum includes


//*********************************
namespace ecore 
{
	/*!
	 */
	class EPackage:virtual public ENamedElement
	{
		public:
 			EPackage(const EPackage &) {}
			EPackage& operator=(EPackage const&) = delete;

		protected:
			EPackage(){}


			//Additional constructors for the containments back reference

			EPackage(std::weak_ptr<ecore::EPackage > par_eSuperPackage);

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~EPackage() {}

			//*********************************
			// Operations
			//*********************************
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EClassifier> getEClassifier(std::string name)  const  = 0;
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual std::string getNsPrefix() const = 0;
			
			/*!
			 */ 
			virtual void setNsPrefix (std::string _nsPrefix)= 0; 
			
			/*!
			 */ 
			virtual std::string getNsURI() const = 0;
			
			/*!
			 */ 
			virtual void setNsURI (std::string _nsURI)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr< Bag<ecore::EClassifier> > getEClassifiers() const = 0;
			
			/*!
			 */
			virtual std::shared_ptr<ecore::EFactory > getEFactoryInstance() const = 0;
			
			/*!
			 */
			virtual void setEFactoryInstance(std::shared_ptr<ecore::EFactory> _eFactoryInstance_eFactoryInstance) = 0;
			/*!
			 */
			virtual std::shared_ptr< Bag<ecore::EPackage> > getESubpackages() const = 0;
			
			/*!
			 */
			virtual std::weak_ptr<ecore::EPackage > getESuperPackage() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 */ 
			std::string m_nsPrefix ;
			/*!
			 */ 
			std::string m_nsURI ;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr< Bag<ecore::EClassifier> > m_eClassifiers;
			/*!
			 */
			std::shared_ptr<ecore::EFactory > m_eFactoryInstance;
			/*!
			 */
			std::shared_ptr< Bag<ecore::EPackage> > m_eSubpackages;
			/*!
			 */
			std::weak_ptr<ecore::EPackage > m_eSuperPackage;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			 
	};

}
#endif /* end of include guard: ECORE_EPACKAGE_HPP */

