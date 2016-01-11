/*===============================================================================
Copyright (c) 2014 Qualcomm Connected Experiences, Inc. All Rights Reserved.

Vuforia is a trademark of PTC Inc., registered in the United States and other 
countries.

@file 
    SmartTerrainBuilder.h

@brief
    Header file for SmartTerrainBuilder class.
===============================================================================*/
#ifndef _QCAR_SMARTTERRAIN_BUILDER_H_
#define _QCAR_SMARTTERRAIN_BUILDER_H_

// Include files
#include "Tracker.h"
#include "Trackable.h"
#include "Vectors.h"
#include "Reconstruction.h"


namespace QCAR
{

/// SmartTerrainBuilder class
/**
 *  The SmartTerrainBuilder controls the smart terrain generation system of Vuforia.
 *  If the SmartTerrainTracker is enabled and the builder is initialized. 
 *  SmartTerrainTrackables (Surface, Prop) will be generated once an appropriate 
 *  Reconstruction object is registered.
 */
class QCAR_API SmartTerrainBuilder : private NonCopyable
{
public:

    /// Returns the Tracker class' type
    static Type getClassType();    

    /// Returns the Trackable instance's type
    virtual Type getType() const = 0;

    /// Checks whether the builder instance's type equals or has been
    /// derived from a give type
    virtual bool isOfType(Type type) const = 0;

    // Factory method for creating an instance of a reconstruction 
    /* 
     * Valid types are ReconstructionFromEnvironment and ReconstructionFromTarget.
     * Passing in any other type will cause NULL to be returned.
     */
    virtual Reconstruction* createReconstruction(Type type) = 0;

    /// Method for cleaning up a previously created reconstruction object
    virtual bool destroyReconstruction(Reconstruction* reco) = 0;

    /// Returns the number of reconstructions registered with the builder.
    virtual unsigned int getNumReconstructions() const = 0;

    /// Adds a reconstruction to the builder and starts it.
    virtual bool addReconstruction(Reconstruction* obj) = 0; 

    /// Removes a reconstruction from the builder and cleans up any generated 
    /// trackables as well.
    virtual bool removeReconstruction(unsigned int index) = 0;

    /// Gets the reconstruction at the given index.
    virtual Reconstruction* getReconstruction(unsigned int index) const = 0;

    /// Initializes the builder, returning true if able to.
    virtual bool init() = 0;

    /// Deinitializes the builder, return true if able to do so.
    virtual bool deinit() = 0;
};

} // namespace QCAR

#endif //_QCAR_SMARTTERRAIN_BUILDER_H_
