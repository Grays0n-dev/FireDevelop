// Automatically generated by GDevelop.js/scripts/generate-types.js
declare class gdPropertyDescriptor {
  constructor(propValue: string): void;
  setValue(value: string): gdPropertyDescriptor;
  getValue(): string;
  setType(type: string): gdPropertyDescriptor;
  getType(): string;
  setLabel(label: string): gdPropertyDescriptor;
  getLabel(): string;
  setDescription(label: string): gdPropertyDescriptor;
  getDescription(): string;
  setGroup(label: string): gdPropertyDescriptor;
  getGroup(): string;
  addExtraInfo(type: string): gdPropertyDescriptor;
  setExtraInfo(info: gdVectorString): gdPropertyDescriptor;
  getExtraInfo(): gdVectorString;
  setHidden(enable: boolean): gdPropertyDescriptor;
  isHidden(): boolean;
  setDeprecated(enable: boolean): gdPropertyDescriptor;
  isDeprecated(): boolean;
  setAdvanced(enable: boolean): gdPropertyDescriptor;
  isAdvanced(): boolean;
  getMeasurementUnit(): gdMeasurementUnit;
  setMeasurementUnit(measurementUnit: gdMeasurementUnit): gdPropertyDescriptor;
  getQuickCustomizationVisibility(): QuickCustomization_Visibility;
  setQuickCustomizationVisibility(visibility: QuickCustomization_Visibility): gdPropertyDescriptor;
  serializeTo(element: gdSerializerElement): void;
  unserializeFrom(element: gdSerializerElement): void;
  serializeValuesTo(element: gdSerializerElement): void;
  unserializeValuesFrom(element: gdSerializerElement): void;
  delete(): void;
  ptr: number;
};