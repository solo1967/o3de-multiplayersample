/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#pragma once

#include <AzToolsFramework/API/ToolsApplicationAPI.h>

#include <Unified/MPSGameLiftSystemComponent.h>

namespace MPSGameLift
{
    /// System component for MPSGameLift editor
    class MPSGameLiftEditorSystemComponent
        : public MPSGameLiftSystemComponent
        , protected AzToolsFramework::EditorEvents::Bus::Handler
    {
        using BaseSystemComponent = MPSGameLiftSystemComponent;
    public:
        AZ_COMPONENT(MPSGameLiftEditorSystemComponent, "{9B966497-AE1C-4942-88A4-55726C728DA6}", BaseSystemComponent);
        static void Reflect(AZ::ReflectContext* context);

        MPSGameLiftEditorSystemComponent();
        ~MPSGameLiftEditorSystemComponent();

    private:
        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent);

        // AZ::Component
        void Activate() override;
        void Deactivate() override;
    };
} // namespace MPSGameLift
