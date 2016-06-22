//**************************************************************************************************
//
//     OSSIM Open Source Geospatial Data Processing Library
//     See top level LICENSE.txt file for license information
//
//**************************************************************************************************

#ifndef ossimBandMergeUtil_HEADER
#define ossimBandMergeUtil_HEADER

#include <ossim/util/ossimChipProcUtil.h>
#include <ossim/base/ossimFilename.h>
#include <ossim/base/ossimKeywordlist.h>

/*!
 *  Class for determining the active image corner vertices inside larger null-filled image rectangle.
 */
class OSSIMDLLEXPORT ossimBandMergeUtil : public ossimChipProcUtil
{
public:
   ossimBandMergeUtil();
   ~ossimBandMergeUtil();

   virtual void setUsage(ossimArgumentParser& ap);

   virtual bool initialize(ossimArgumentParser& ap);

   virtual void initialize(const ossimKeywordlist& kwl);

   virtual ossimString getClassName() const { return "ossimBandMergeUtil"; }

   virtual void getKwlTemplate(ossimKeywordlist& kwl);

   virtual bool execute();

   /** Used by ossimUtilityFactory */
   static const char* DESCRIPTION;

protected:
   virtual void initProcessingChain();
   virtual void initHistogramStretch(ossimSingleImageChain* image);

   bool m_stretchProduct;
};

#endif
