#include "HoudiniRuntimeSettings.h"

UHoudiniRuntimeSettings::UHoudiniRuntimeSettings() {
    this->SessionType = HRSST_InProcess;
    this->ServerHost = TEXT("localhost");
    this->ServerPort = 0;
    this->ServerPipeName = TEXT("hapi");
    this->bStartAutomaticServer = false;
    this->AutomaticServerTimeout = 1;
    this->bShowMultiAssetDialog = true;
    this->bEnableCooking = true;
    this->bUploadTransformsToHoudiniEngine = true;
    this->bTransformChangeTriggersCooks = false;
    this->bDisplaySlateCookingNotifications = true;
    this->bCookCurvesOnMouseRelease = false;
    this->TemporaryCookFolder = FText::FromString(TEXT("/Game/HoudiniEngine/Temp"));
    this->bTreatRampParametersAsMultiparms = false;
    this->CollisionGroupNamePrefix = TEXT("collision_geo");
    this->RenderedCollisionGroupNamePrefix = TEXT("rendered_collision_geo");
    this->UCXCollisionGroupNamePrefix = TEXT("collision_geo_ucx");
    this->UCXRenderedCollisionGroupNamePrefix = TEXT("rendered_collision_geo_ucx");
    this->SimpleCollisionGroupNamePrefix = TEXT("collision_geo_simple");
    this->SimpleRenderedCollisionGroupNamePrefix = TEXT("rendered_collision_geo_simple");
    this->MarshallingAttributeMaterial = TEXT("unreal_material");
    this->MarshallingAttributeMaterialHole = TEXT("unreal_material_hole");
    this->MarshallingAttributeInstanceOverride = TEXT("unreal_instance");
    this->MarshallingAttributeFaceSmoothingMask = TEXT("unreal_face_smoothing_mask");
    this->MarshallingAttributeLightmapResolution = TEXT("unreal_lightmap_resolution");
    this->MarshallingAttributeGeneratedMeshName = TEXT("unreal_generated_mesh_name");
    this->MarshallingAttributeInputMeshName = TEXT("unreal_input_mesh_name");
    this->MarshallingAttributeInputSourceFile = TEXT("unreal_input_source_file");
    this->MarshallingSplineResolution = 1;
    this->MarshallingLandscapesUseFullResolution = true;
    this->MarshallingLandscapesForceMinMaxValues = false;
    this->MarshallingLandscapesForcedMinValue = 1;
    this->MarshallingLandscapesForcedMaxValue = 1;
    this->GeneratedGeometryScaleFactor = 1;
    this->TransformScaleFactor = 1;
    this->ImportAxis = HRSAI_Unreal;
    this->bDoubleSidedGeometry = false;
    this->PhysMaterial = NULL;
    this->CollisionTraceFlag = CTF_UseDefault;
    this->LightMapResolution = 0;
    this->LpvBiasMultiplier = 1;
    this->GeneratedDistanceFieldResolutionScale = 1;
    this->LightMapCoordinateIndex = 0;
    this->bUseMaximumStreamingTexelRatio = false;
    this->StreamingDistanceMultiplier = 1;
    this->FoliageDefaultSettings = NULL;
    this->bUseFullPrecisionUVs = false;
    this->SrcLightmapIndex = 0;
    this->DstLightmapIndex = 0;
    this->MinLightmapResolution = 0;
    this->bRemoveDegenerates = true;
    this->GenerateLightmapUVsFlag = HRSRF_OnlyIfMissing;
    this->RecomputeNormalsFlag = HRSRF_OnlyIfMissing;
    this->RecomputeTangentsFlag = HRSRF_OnlyIfMissing;
    this->bUseMikkTSpace = true;
    this->bBuildAdjacencyBuffer = false;
    this->bUseCustomHoudiniLocation = false;
    this->bHidePlacementModeHoudiniTools = false;
    this->CookingThreadStackSize = 0;
}
