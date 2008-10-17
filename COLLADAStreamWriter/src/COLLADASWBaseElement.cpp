/*
    Copyright (c) 2008 NetAllied Systems GmbH

	This file is part of COLLADASWStreamWriter.

    Licensed under the MIT Open Source License, 
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/
#include "COLLADASWBaseElement.h"
#include "COLLADASWConstants.h"


namespace COLLADASW
{

    //---------------------------------------------------------------
    void BaseElement::add()
    {
        mSW->openElement ( mElementName );

        if ( !mNodeId.empty() )
            mSW->appendAttribute ( CSWC::CSW_ATTRIBUTE_ID, mNodeId );

        if ( !mNodeName.empty() )
            mSW->appendAttribute ( CSWC::CSW_ATTRIBUTE_NAME, mNodeName );

        mSW->closeElement();
    }

} //namespace COLLADASW