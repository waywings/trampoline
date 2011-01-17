//---------------------------------------------------------------------------*
//                                                                           *
//                        File 'resources_verif.cpp'                         *
//                    Generated by version version 2.1.4                     *
//                     january 10th, 2011, at 14h31'42"                      *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#include "version_libpm.h"
#if CURRENT_LIBPM_VERSION != 926
  #error "This file has been compiled with a version of GALGAS that uses libpm version 926, different than the current version (CURRENT_LIBPM_VERSION) of libpm"
#endif

//---------------------------------------------------------------------------*

#include "resources_verif.h"
#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_CLI_Options.h"

//---------------------------------------------------------------------------*


//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "resources_verif.gSemantics", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif

//---------------------------------------------------------------------------*
//                                                                           *
//                      Routine 'resources_well_formed'                      *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_resources_5F_well_5F_formed (const GALGAS_resource_5F_map constinArgument_resources,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  //-------- @foreachInstructionForGeneration
  cEnumerator_resource_5F_map enumerator_840 (constinArgument_resources, true) ;
  //--- simple foreach instruction
  while (enumerator_840.hasCurrentObject ()) {
    //-------- @structuredCastInstructionForGeneration
    if (enumerator_840.current_resource (HERE).reader_property (SOURCE_FILE_AT_LINE (45)).isValid ()) {
      if (enumerator_840.current_resource (HERE).reader_property (SOURCE_FILE_AT_LINE (45)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_resource_5F_property_5F_void_5F_obj) {
        //-------- @errorInstructionForGeneration
        GALGAS_location location_0 (enumerator_840.current_lkey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_0, GALGAS_string ("RESOURCEPROPERTY attribute undefined for RESOURCE ").operator_concat (enumerator_840.current_lkey (HERE).reader_string (SOURCE_FILE_AT_LINE (47)) COMMA_SOURCE_FILE_AT_LINE (47)) COMMA_SOURCE_FILE_AT_LINE (47)) ;
      }
    }
    enumerator_840.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------*
//                                                                           *
//                    Routine 'resolve_linked_resources'                     *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_resolve_5F_linked_5F_resources (GALGAS_resource_5F_map & ioArgument_resources,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  //-------- @localVariableOrConstantDeclarationWithConstructorCallForGeneration
  GALGAS_resource_5F_map var_resolved = GALGAS_resource_5F_map::constructor_emptyMap (SOURCE_FILE_AT_LINE (67)) ;
  //-------- @localVariableOrConstantDeclarationWithSourceExpressionForGeneration
  GALGAS_resource_5F_map var_unresolved = ioArgument_resources ;
  //-------- @localVariableOrConstantDeclarationWithConstructorCallForGeneration
  GALGAS_resource_5F_map var_unresolved_5F_next = GALGAS_resource_5F_map::constructor_emptyMap (SOURCE_FILE_AT_LINE (69)) ;
  //-------- @localVariableOrConstantDeclarationWithSourceExpressionForGeneration
  GALGAS_bool var_first_5F_loop = GALGAS_bool (true) ;
  //-------- @loopInstructionForGeneration
  if (var_unresolved.reader_count (SOURCE_FILE_AT_LINE (72)).substract_operation (var_unresolved_5F_next.reader_count (SOURCE_FILE_AT_LINE (72)), inCompiler COMMA_SOURCE_FILE_AT_LINE (72)).add_operation (GALGAS_uint ((PMUInt32) 1U), inCompiler COMMA_SOURCE_FILE_AT_LINE (72)).isValid ()) {
    PMUInt32 variant_1638 = var_unresolved.reader_count (SOURCE_FILE_AT_LINE (72)).substract_operation (var_unresolved_5F_next.reader_count (SOURCE_FILE_AT_LINE (72)), inCompiler COMMA_SOURCE_FILE_AT_LINE (72)).add_operation (GALGAS_uint ((PMUInt32) 1U), inCompiler COMMA_SOURCE_FILE_AT_LINE (72)).uintValue () ;
    bool loop_1638 = true ;
    while (loop_1638) {
        //-------- @ifInstructionForGeneration
        const enumGalgasBool test_0 = var_first_5F_loop.boolEnum () ;
        if (kBoolTrue == test_0) {
          //-------- @assignmentInstructionForGeneration
          var_first_5F_loop = GALGAS_bool (false) ;
        }else if (kBoolFalse == test_0) {
          //-------- @assignmentInstructionForGeneration
          var_unresolved = var_unresolved_5F_next ;
          //-------- @assignmentInstructionForGeneration
          var_unresolved_5F_next = GALGAS_resource_5F_map::constructor_emptyMap (SOURCE_FILE_AT_LINE (76)) ;
        }
      loop_1638 = GALGAS_bool (kIsStrictSup, var_unresolved.reader_count (SOURCE_FILE_AT_LINE (78)).objectCompare (GALGAS_uint ((PMUInt32) 0U))).isValid () ;
      if (loop_1638) {
        loop_1638 = GALGAS_bool (kIsStrictSup, var_unresolved.reader_count (SOURCE_FILE_AT_LINE (78)).objectCompare (GALGAS_uint ((PMUInt32) 0U))).boolValue () ;
      }
      if (loop_1638 && (0 == variant_1638)) {
        loop_1638 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE_AT_LINE (72)) ;
      }
      if (loop_1638) {
        variant_1638 -- ;
        //-------- @foreachInstructionForGeneration
        cEnumerator_resource_5F_map enumerator_1905 (var_unresolved, true) ;
        //--- simple foreach instruction
        while (enumerator_1905.hasCurrentObject ()) {
          //-------- @localVariableDeclarationForGeneration
          GALGAS_resource_5F_property_5F_obj var_res_5F_prop ;
          //-------- @assignmentInstructionForGeneration
          var_res_5F_prop = enumerator_1905.current_resource (HERE).reader_property (SOURCE_FILE_AT_LINE (82)) ;
          //-------- @structuredCastInstructionForGeneration
          if (var_res_5F_prop.isValid ()) {
            if (var_res_5F_prop.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_resource_5F_property_5F_linked_5F_obj) {
              GALGAS_resource_5F_property_5F_linked_5F_obj cast_2162_rplo ((cPtr_resource_5F_property_5F_linked_5F_obj *) var_res_5F_prop.ptr ()) ;
              //-------- @ifInstructionForGeneration
              const enumGalgasBool test_1 = var_resolved.reader_hasKey (cast_2162_rplo.reader_linked_5F_resource (SOURCE_FILE_AT_LINE (90)).reader_string (SOURCE_FILE_AT_LINE (90)) COMMA_SOURCE_FILE_AT_LINE (90)).boolEnum () ;
              if (kBoolTrue == test_1) {
                //-------- @localVariableDeclarationForGeneration
                GALGAS_resource_5F_obj var_target_5F_resource ;
                //-------- @localVariableDeclarationForGeneration
                GALGAS_resource_5F_property_5F_obj var_target_5F_property ;
                //-------- @methodCallInstructionForGeneration
                var_resolved.method_get (cast_2162_rplo.reader_linked_5F_resource (SOURCE_FILE_AT_LINE (93)), var_target_5F_resource, inCompiler COMMA_SOURCE_FILE_AT_LINE (93)) ;
                //-------- END @methodCallInstructionForGeneration
                //-------- @assignmentInstructionForGeneration
                var_target_5F_property = var_target_5F_resource.reader_property (SOURCE_FILE_AT_LINE (94)) ;
                //-------- @structuredCastInstructionForGeneration
                if (var_target_5F_property.isValid ()) {
                  if (var_target_5F_property.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_resource_5F_property_5F_standard_5F_obj) {
                    { //-------- @modifierCallInstructionForGeneration
                    var_resolved.modifier_put (enumerator_1905.current_lkey (HERE), enumerator_1905.current_resource (HERE), inCompiler COMMA_SOURCE_FILE_AT_LINE (99)) ;
                    } //-------- END @typeMethodInstructionForGeneration
                  }else if (var_target_5F_property.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_resource_5F_property_5F_internal_5F_obj) {
                    //-------- @errorInstructionForGeneration
                    inCompiler->emitSemanticError (var_target_5F_property.reader_location (SOURCE_FILE_AT_LINE (103)), GALGAS_string ("RESOURCE ").operator_concat (enumerator_1905.current_lkey (HERE).reader_string (SOURCE_FILE_AT_LINE (103)) COMMA_SOURCE_FILE_AT_LINE (103)).operator_concat (GALGAS_string (" is linked to INTERNAL RESOURCE ") COMMA_SOURCE_FILE_AT_LINE (103)).operator_concat (cast_2162_rplo.reader_linked_5F_resource (SOURCE_FILE_AT_LINE (103)).reader_string (SOURCE_FILE_AT_LINE (103)) COMMA_SOURCE_FILE_AT_LINE (103)) COMMA_SOURCE_FILE_AT_LINE (103)) ;
                  }else if (var_target_5F_property.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_resource_5F_property_5F_linked_5F_obj) {
                    GALGAS_resource_5F_property_5F_linked_5F_obj cast_3154_nrplo ((cPtr_resource_5F_property_5F_linked_5F_obj *) var_target_5F_property.ptr ()) ;
                    //-------- @localVariableOrConstantDeclarationWithSourceExpressionForGeneration
                    GALGAS_resource_5F_property_5F_linked_5F_obj var_resolved_5F_prop = GALGAS_resource_5F_property_5F_linked_5F_obj::constructor_new (cast_3154_nrplo.reader_location (SOURCE_FILE_AT_LINE (108)), cast_3154_nrplo.reader_linked_5F_resource (SOURCE_FILE_AT_LINE (108)) COMMA_SOURCE_FILE_AT_LINE (108)) ;
                    //-------- @localVariableOrConstantDeclarationWithSourceExpressionForGeneration
                    GALGAS_lstring var_resolved_5F_desc = enumerator_1905.current_resource (HERE).reader_desc (SOURCE_FILE_AT_LINE (109)) ;
                    //-------- @localVariableOrConstantDeclarationWithSourceExpressionForGeneration
                    GALGAS_resource_5F_obj var_resolved_5F_res = GALGAS_resource_5F_obj::constructor_new (var_resolved_5F_desc, var_resolved_5F_prop, enumerator_1905.current_resource (HERE).reader_acc_5F_apps (SOURCE_FILE_AT_LINE (110)) COMMA_SOURCE_FILE_AT_LINE (110)) ;
                    { //-------- @modifierCallInstructionForGeneration
                    var_resolved.modifier_put (enumerator_1905.current_lkey (HERE), var_resolved_5F_res, inCompiler COMMA_SOURCE_FILE_AT_LINE (111)) ;
                    } //-------- END @typeMethodInstructionForGeneration
                  }
                }
              }else if (kBoolFalse == test_1) {
                { //-------- @modifierCallInstructionForGeneration
                var_unresolved_5F_next.modifier_put (enumerator_1905.current_lkey (HERE), enumerator_1905.current_resource (HERE), inCompiler COMMA_SOURCE_FILE_AT_LINE (117)) ;
                } //-------- END @typeMethodInstructionForGeneration
              }
            }else{
              { //-------- @modifierCallInstructionForGeneration
              var_resolved.modifier_put (enumerator_1905.current_lkey (HERE), enumerator_1905.current_resource (HERE), inCompiler COMMA_SOURCE_FILE_AT_LINE (121)) ;
              } //-------- END @typeMethodInstructionForGeneration
            }
          }
          enumerator_1905.gotoNextObject () ;
        }
        //-------- @ifInstructionForGeneration
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_unresolved.reader_count (SOURCE_FILE_AT_LINE (124)).objectCompare (var_unresolved_5F_next.reader_count (SOURCE_FILE_AT_LINE (124)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          //-------- @errorInstructionForGeneration
          inCompiler->emitSemanticError (inCompiler->here (), GALGAS_string ("Cycle detected in linked resource") COMMA_SOURCE_FILE_AT_LINE (126)) ;
          //-------- @foreachInstructionForGeneration
          cEnumerator_resource_5F_map enumerator_4025 (var_unresolved_5F_next, true) ;
          //--- simple foreach instruction
          while (enumerator_4025.hasCurrentObject ()) {
            //-------- @errorInstructionForGeneration
            GALGAS_location location_3 (enumerator_4025.current_lkey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_3, GALGAS_string ("Involved in cycle") COMMA_SOURCE_FILE_AT_LINE (128)) ;
            enumerator_4025.gotoNextObject () ;
          }
        }
      }
    }
  }
  //-------- @assignmentInstructionForGeneration
  ioArgument_resources = var_resolved ;
}


//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


