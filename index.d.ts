import React from "react";
import { requireNativeComponent, ViewProps } from "react-native";

export const PortalOrigin : React.FC<{
    destination ?: string|null
} & ViewProps>;
export const PortalDestination : React.FC<{
    name : string
} & ViewProps>;
