Reactive Adaptatioon Manager 3(*ReactiveAdaptationManager3*)  uses combination of both respond time and power consumption along with its thresholds values to select the adaptation tactics.

Reactive Adaptatioon Manager 4(*ReactiveAdaptationManager4*)  only uses power consumption and its threshold to select the adaptation tactics.

*PowerScorer* class is created to calculate the power consumption of a server as per its utility value.

In *SimpleMonitor* class(/monitor), we have added a monitoring mechanism of calculated power consumption in *SimpleMonitor::periodicHandler()*.
