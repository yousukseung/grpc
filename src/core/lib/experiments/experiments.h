// Copyright 2023 gRPC authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Auto generated by tools/codegen/core/gen_experiments.py
//
// This file contains the autogenerated parts of the experiments API.
//
// It generates two symbols for each experiment.
//
// For the experiment named new_car_project, it generates:
//
// - a function IsNewCarProjectEnabled() that returns true if the experiment
//   should be enabled at runtime.
//
// - a macro GRPC_EXPERIMENT_IS_INCLUDED_NEW_CAR_PROJECT that is defined if the
//   experiment *could* be enabled at runtime.
//
// The function is used to determine whether to run the experiment or
// non-experiment code path.
//
// If the experiment brings significant bloat, the macro can be used to avoid
// including the experiment code path in the binary for binaries that are size
// sensitive.
//
// By default that includes our iOS and Android builds.
//
// Finally, a small array is included that contains the metadata for each
// experiment.
//
// A macro, GRPC_EXPERIMENTS_ARE_FINAL, controls whether we fix experiment
// configuration at build time (if it's defined) or allow it to be tuned at
// runtime (if it's disabled).
//
// If you are using the Bazel build system, that macro can be configured with
// --define=grpc_experiments_are_final=true

#ifndef GRPC_SRC_CORE_LIB_EXPERIMENTS_EXPERIMENTS_H
#define GRPC_SRC_CORE_LIB_EXPERIMENTS_EXPERIMENTS_H

#include <grpc/support/port_platform.h>

#include "src/core/lib/experiments/config.h"

namespace grpc_core {

#ifdef GRPC_EXPERIMENTS_ARE_FINAL

#if defined(GRPC_CFSTREAM)
inline bool IsTcpFrameSizeTuningEnabled() { return false; }
inline bool IsTcpRcvLowatEnabled() { return false; }
inline bool IsPeerStateBasedFramingEnabled() { return false; }
inline bool IsMemoryPressureControllerEnabled() { return false; }
inline bool IsUnconstrainedMaxQuotaBufferSizeEnabled() { return false; }
inline bool IsEventEngineClientEnabled() { return false; }
#define GRPC_EXPERIMENT_IS_INCLUDED_MONITORING_EXPERIMENT
inline bool IsMonitoringExperimentEnabled() { return true; }
inline bool IsPromiseBasedClientCallEnabled() { return false; }
inline bool IsFreeLargeAllocatorEnabled() { return false; }
inline bool IsPromiseBasedServerCallEnabled() { return false; }
inline bool IsEventEngineListenerEnabled() { return false; }
inline bool IsScheduleCancellationOverWriteEnabled() { return false; }
inline bool IsTraceRecordCallopsEnabled() { return false; }
inline bool IsEventEngineDnsEnabled() { return false; }
inline bool IsClientPrivacyEnabled() { return false; }
inline bool IsCanaryClientPrivacyEnabled() { return false; }
inline bool IsServerPrivacyEnabled() { return false; }
inline bool IsKeepaliveFixEnabled() { return false; }
inline bool IsKeepaliveServerFixEnabled() { return false; }
inline bool IsWorkSerializerDispatchEnabled() { return false; }
#define GRPC_EXPERIMENT_IS_INCLUDED_LAZIER_STREAM_UPDATES
inline bool IsLazierStreamUpdatesEnabled() { return true; }
#define GRPC_EXPERIMENT_IS_INCLUDED_JITTER_MAX_IDLE
inline bool IsJitterMaxIdleEnabled() { return true; }
#define GRPC_EXPERIMENT_IS_INCLUDED_ROUND_ROBIN_DELEGATE_TO_PICK_FIRST
inline bool IsRoundRobinDelegateToPickFirstEnabled() { return true; }
#define GRPC_EXPERIMENT_IS_INCLUDED_WRR_DELEGATE_TO_PICK_FIRST
inline bool IsWrrDelegateToPickFirstEnabled() { return true; }
#define GRPC_EXPERIMENT_IS_INCLUDED_PICK_FIRST_HAPPY_EYEBALLS
inline bool IsPickFirstHappyEyeballsEnabled() { return true; }
#define GRPC_EXPERIMENT_IS_INCLUDED_COMBINER_OFFLOAD_TO_EVENT_ENGINE
inline bool IsCombinerOffloadToEventEngineEnabled() { return true; }
inline bool IsMultipingEnabled() { return false; }
#define GRPC_EXPERIMENT_IS_INCLUDED_REGISTERED_METHOD_LOOKUP_IN_TRANSPORT
inline bool IsRegisteredMethodLookupInTransportEnabled() { return true; }
#ifndef NDEBUG
#define GRPC_EXPERIMENT_IS_INCLUDED_CALL_STATUS_OVERRIDE_ON_CANCELLATION
#endif
inline bool IsCallStatusOverrideOnCancellationEnabled() {
#ifdef NDEBUG
  return false;
#else
  return true;
#endif
}
#define GRPC_EXPERIMENT_IS_INCLUDED_WORK_SERIALIZER_CLEARS_TIME_CACHE
inline bool IsWorkSerializerClearsTimeCacheEnabled() { return true; }
#define GRPC_EXPERIMENT_IS_INCLUDED_BLOCK_EXCESSIVE_REQUESTS_BEFORE_SETTINGS_ACK
inline bool IsBlockExcessiveRequestsBeforeSettingsAckEnabled() { return true; }
#define GRPC_EXPERIMENT_IS_INCLUDED_PING_ON_RST_STREAM
inline bool IsPingOnRstStreamEnabled() { return true; }

#elif defined(GPR_WINDOWS)
inline bool IsTcpFrameSizeTuningEnabled() { return false; }
inline bool IsTcpRcvLowatEnabled() { return false; }
inline bool IsPeerStateBasedFramingEnabled() { return false; }
inline bool IsMemoryPressureControllerEnabled() { return false; }
inline bool IsUnconstrainedMaxQuotaBufferSizeEnabled() { return false; }
inline bool IsEventEngineClientEnabled() { return false; }
#define GRPC_EXPERIMENT_IS_INCLUDED_MONITORING_EXPERIMENT
inline bool IsMonitoringExperimentEnabled() { return true; }
inline bool IsPromiseBasedClientCallEnabled() { return false; }
inline bool IsFreeLargeAllocatorEnabled() { return false; }
inline bool IsPromiseBasedServerCallEnabled() { return false; }
inline bool IsEventEngineListenerEnabled() { return false; }
inline bool IsScheduleCancellationOverWriteEnabled() { return false; }
inline bool IsTraceRecordCallopsEnabled() { return false; }
inline bool IsEventEngineDnsEnabled() { return false; }
inline bool IsClientPrivacyEnabled() { return false; }
inline bool IsCanaryClientPrivacyEnabled() { return false; }
inline bool IsServerPrivacyEnabled() { return false; }
inline bool IsKeepaliveFixEnabled() { return false; }
inline bool IsKeepaliveServerFixEnabled() { return false; }
inline bool IsWorkSerializerDispatchEnabled() { return false; }
#define GRPC_EXPERIMENT_IS_INCLUDED_LAZIER_STREAM_UPDATES
inline bool IsLazierStreamUpdatesEnabled() { return true; }
#define GRPC_EXPERIMENT_IS_INCLUDED_JITTER_MAX_IDLE
inline bool IsJitterMaxIdleEnabled() { return true; }
#define GRPC_EXPERIMENT_IS_INCLUDED_ROUND_ROBIN_DELEGATE_TO_PICK_FIRST
inline bool IsRoundRobinDelegateToPickFirstEnabled() { return true; }
#define GRPC_EXPERIMENT_IS_INCLUDED_WRR_DELEGATE_TO_PICK_FIRST
inline bool IsWrrDelegateToPickFirstEnabled() { return true; }
#define GRPC_EXPERIMENT_IS_INCLUDED_PICK_FIRST_HAPPY_EYEBALLS
inline bool IsPickFirstHappyEyeballsEnabled() { return true; }
#define GRPC_EXPERIMENT_IS_INCLUDED_COMBINER_OFFLOAD_TO_EVENT_ENGINE
inline bool IsCombinerOffloadToEventEngineEnabled() { return true; }
inline bool IsMultipingEnabled() { return false; }
#define GRPC_EXPERIMENT_IS_INCLUDED_REGISTERED_METHOD_LOOKUP_IN_TRANSPORT
inline bool IsRegisteredMethodLookupInTransportEnabled() { return true; }
#ifndef NDEBUG
#define GRPC_EXPERIMENT_IS_INCLUDED_CALL_STATUS_OVERRIDE_ON_CANCELLATION
#endif
inline bool IsCallStatusOverrideOnCancellationEnabled() {
#ifdef NDEBUG
  return false;
#else
  return true;
#endif
}
#define GRPC_EXPERIMENT_IS_INCLUDED_WORK_SERIALIZER_CLEARS_TIME_CACHE
inline bool IsWorkSerializerClearsTimeCacheEnabled() { return true; }
#define GRPC_EXPERIMENT_IS_INCLUDED_BLOCK_EXCESSIVE_REQUESTS_BEFORE_SETTINGS_ACK
inline bool IsBlockExcessiveRequestsBeforeSettingsAckEnabled() { return true; }
#define GRPC_EXPERIMENT_IS_INCLUDED_PING_ON_RST_STREAM
inline bool IsPingOnRstStreamEnabled() { return true; }

#else
inline bool IsTcpFrameSizeTuningEnabled() { return false; }
inline bool IsTcpRcvLowatEnabled() { return false; }
inline bool IsPeerStateBasedFramingEnabled() { return false; }
inline bool IsMemoryPressureControllerEnabled() { return false; }
inline bool IsUnconstrainedMaxQuotaBufferSizeEnabled() { return false; }
inline bool IsEventEngineClientEnabled() { return false; }
#define GRPC_EXPERIMENT_IS_INCLUDED_MONITORING_EXPERIMENT
inline bool IsMonitoringExperimentEnabled() { return true; }
inline bool IsPromiseBasedClientCallEnabled() { return false; }
inline bool IsFreeLargeAllocatorEnabled() { return false; }
inline bool IsPromiseBasedServerCallEnabled() { return false; }
inline bool IsEventEngineListenerEnabled() { return false; }
inline bool IsScheduleCancellationOverWriteEnabled() { return false; }
inline bool IsTraceRecordCallopsEnabled() { return false; }
inline bool IsEventEngineDnsEnabled() { return false; }
inline bool IsClientPrivacyEnabled() { return false; }
inline bool IsCanaryClientPrivacyEnabled() { return false; }
inline bool IsServerPrivacyEnabled() { return false; }
inline bool IsKeepaliveFixEnabled() { return false; }
inline bool IsKeepaliveServerFixEnabled() { return false; }
inline bool IsWorkSerializerDispatchEnabled() { return false; }
#define GRPC_EXPERIMENT_IS_INCLUDED_LAZIER_STREAM_UPDATES
inline bool IsLazierStreamUpdatesEnabled() { return true; }
#define GRPC_EXPERIMENT_IS_INCLUDED_JITTER_MAX_IDLE
inline bool IsJitterMaxIdleEnabled() { return true; }
#define GRPC_EXPERIMENT_IS_INCLUDED_ROUND_ROBIN_DELEGATE_TO_PICK_FIRST
inline bool IsRoundRobinDelegateToPickFirstEnabled() { return true; }
#define GRPC_EXPERIMENT_IS_INCLUDED_WRR_DELEGATE_TO_PICK_FIRST
inline bool IsWrrDelegateToPickFirstEnabled() { return true; }
#define GRPC_EXPERIMENT_IS_INCLUDED_PICK_FIRST_HAPPY_EYEBALLS
inline bool IsPickFirstHappyEyeballsEnabled() { return true; }
#define GRPC_EXPERIMENT_IS_INCLUDED_COMBINER_OFFLOAD_TO_EVENT_ENGINE
inline bool IsCombinerOffloadToEventEngineEnabled() { return true; }
inline bool IsMultipingEnabled() { return false; }
#define GRPC_EXPERIMENT_IS_INCLUDED_REGISTERED_METHOD_LOOKUP_IN_TRANSPORT
inline bool IsRegisteredMethodLookupInTransportEnabled() { return true; }
#ifndef NDEBUG
#define GRPC_EXPERIMENT_IS_INCLUDED_CALL_STATUS_OVERRIDE_ON_CANCELLATION
#endif
inline bool IsCallStatusOverrideOnCancellationEnabled() {
#ifdef NDEBUG
  return false;
#else
  return true;
#endif
}
#define GRPC_EXPERIMENT_IS_INCLUDED_WORK_SERIALIZER_CLEARS_TIME_CACHE
inline bool IsWorkSerializerClearsTimeCacheEnabled() { return true; }
#define GRPC_EXPERIMENT_IS_INCLUDED_BLOCK_EXCESSIVE_REQUESTS_BEFORE_SETTINGS_ACK
inline bool IsBlockExcessiveRequestsBeforeSettingsAckEnabled() { return true; }
#define GRPC_EXPERIMENT_IS_INCLUDED_PING_ON_RST_STREAM
inline bool IsPingOnRstStreamEnabled() { return true; }
#endif

#else
enum ExperimentIds {
  kExperimentIdTcpFrameSizeTuning,
  kExperimentIdTcpRcvLowat,
  kExperimentIdPeerStateBasedFraming,
  kExperimentIdMemoryPressureController,
  kExperimentIdUnconstrainedMaxQuotaBufferSize,
  kExperimentIdEventEngineClient,
  kExperimentIdMonitoringExperiment,
  kExperimentIdPromiseBasedClientCall,
  kExperimentIdFreeLargeAllocator,
  kExperimentIdPromiseBasedServerCall,
  kExperimentIdEventEngineListener,
  kExperimentIdScheduleCancellationOverWrite,
  kExperimentIdTraceRecordCallops,
  kExperimentIdEventEngineDns,
  kExperimentIdClientPrivacy,
  kExperimentIdCanaryClientPrivacy,
  kExperimentIdServerPrivacy,
  kExperimentIdKeepaliveFix,
  kExperimentIdKeepaliveServerFix,
  kExperimentIdWorkSerializerDispatch,
  kExperimentIdLazierStreamUpdates,
  kExperimentIdJitterMaxIdle,
  kExperimentIdRoundRobinDelegateToPickFirst,
  kExperimentIdWrrDelegateToPickFirst,
  kExperimentIdPickFirstHappyEyeballs,
  kExperimentIdCombinerOffloadToEventEngine,
  kExperimentIdMultiping,
  kExperimentIdRegisteredMethodLookupInTransport,
  kExperimentIdCallStatusOverrideOnCancellation,
  kExperimentIdWorkSerializerClearsTimeCache,
  kExperimentIdBlockExcessiveRequestsBeforeSettingsAck,
  kExperimentIdPingOnRstStream,
  kNumExperiments
};
#define GRPC_EXPERIMENT_IS_INCLUDED_TCP_FRAME_SIZE_TUNING
inline bool IsTcpFrameSizeTuningEnabled() {
  return IsExperimentEnabled(kExperimentIdTcpFrameSizeTuning);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_TCP_RCV_LOWAT
inline bool IsTcpRcvLowatEnabled() {
  return IsExperimentEnabled(kExperimentIdTcpRcvLowat);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_PEER_STATE_BASED_FRAMING
inline bool IsPeerStateBasedFramingEnabled() {
  return IsExperimentEnabled(kExperimentIdPeerStateBasedFraming);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_MEMORY_PRESSURE_CONTROLLER
inline bool IsMemoryPressureControllerEnabled() {
  return IsExperimentEnabled(kExperimentIdMemoryPressureController);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_UNCONSTRAINED_MAX_QUOTA_BUFFER_SIZE
inline bool IsUnconstrainedMaxQuotaBufferSizeEnabled() {
  return IsExperimentEnabled(kExperimentIdUnconstrainedMaxQuotaBufferSize);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_EVENT_ENGINE_CLIENT
inline bool IsEventEngineClientEnabled() {
  return IsExperimentEnabled(kExperimentIdEventEngineClient);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_MONITORING_EXPERIMENT
inline bool IsMonitoringExperimentEnabled() {
  return IsExperimentEnabled(kExperimentIdMonitoringExperiment);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_PROMISE_BASED_CLIENT_CALL
inline bool IsPromiseBasedClientCallEnabled() {
  return IsExperimentEnabled(kExperimentIdPromiseBasedClientCall);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_FREE_LARGE_ALLOCATOR
inline bool IsFreeLargeAllocatorEnabled() {
  return IsExperimentEnabled(kExperimentIdFreeLargeAllocator);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_PROMISE_BASED_SERVER_CALL
inline bool IsPromiseBasedServerCallEnabled() {
  return IsExperimentEnabled(kExperimentIdPromiseBasedServerCall);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_EVENT_ENGINE_LISTENER
inline bool IsEventEngineListenerEnabled() {
  return IsExperimentEnabled(kExperimentIdEventEngineListener);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_SCHEDULE_CANCELLATION_OVER_WRITE
inline bool IsScheduleCancellationOverWriteEnabled() {
  return IsExperimentEnabled(kExperimentIdScheduleCancellationOverWrite);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_TRACE_RECORD_CALLOPS
inline bool IsTraceRecordCallopsEnabled() {
  return IsExperimentEnabled(kExperimentIdTraceRecordCallops);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_EVENT_ENGINE_DNS
inline bool IsEventEngineDnsEnabled() {
  return IsExperimentEnabled(kExperimentIdEventEngineDns);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_CLIENT_PRIVACY
inline bool IsClientPrivacyEnabled() {
  return IsExperimentEnabled(kExperimentIdClientPrivacy);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_CANARY_CLIENT_PRIVACY
inline bool IsCanaryClientPrivacyEnabled() {
  return IsExperimentEnabled(kExperimentIdCanaryClientPrivacy);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_SERVER_PRIVACY
inline bool IsServerPrivacyEnabled() {
  return IsExperimentEnabled(kExperimentIdServerPrivacy);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_KEEPALIVE_FIX
inline bool IsKeepaliveFixEnabled() {
  return IsExperimentEnabled(kExperimentIdKeepaliveFix);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_KEEPALIVE_SERVER_FIX
inline bool IsKeepaliveServerFixEnabled() {
  return IsExperimentEnabled(kExperimentIdKeepaliveServerFix);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_WORK_SERIALIZER_DISPATCH
inline bool IsWorkSerializerDispatchEnabled() {
  return IsExperimentEnabled(kExperimentIdWorkSerializerDispatch);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_LAZIER_STREAM_UPDATES
inline bool IsLazierStreamUpdatesEnabled() {
  return IsExperimentEnabled(kExperimentIdLazierStreamUpdates);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_JITTER_MAX_IDLE
inline bool IsJitterMaxIdleEnabled() {
  return IsExperimentEnabled(kExperimentIdJitterMaxIdle);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_ROUND_ROBIN_DELEGATE_TO_PICK_FIRST
inline bool IsRoundRobinDelegateToPickFirstEnabled() {
  return IsExperimentEnabled(kExperimentIdRoundRobinDelegateToPickFirst);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_WRR_DELEGATE_TO_PICK_FIRST
inline bool IsWrrDelegateToPickFirstEnabled() {
  return IsExperimentEnabled(kExperimentIdWrrDelegateToPickFirst);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_PICK_FIRST_HAPPY_EYEBALLS
inline bool IsPickFirstHappyEyeballsEnabled() {
  return IsExperimentEnabled(kExperimentIdPickFirstHappyEyeballs);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_COMBINER_OFFLOAD_TO_EVENT_ENGINE
inline bool IsCombinerOffloadToEventEngineEnabled() {
  return IsExperimentEnabled(kExperimentIdCombinerOffloadToEventEngine);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_MULTIPING
inline bool IsMultipingEnabled() {
  return IsExperimentEnabled(kExperimentIdMultiping);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_REGISTERED_METHOD_LOOKUP_IN_TRANSPORT
inline bool IsRegisteredMethodLookupInTransportEnabled() {
  return IsExperimentEnabled(kExperimentIdRegisteredMethodLookupInTransport);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_CALL_STATUS_OVERRIDE_ON_CANCELLATION
inline bool IsCallStatusOverrideOnCancellationEnabled() {
  return IsExperimentEnabled(kExperimentIdCallStatusOverrideOnCancellation);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_WORK_SERIALIZER_CLEARS_TIME_CACHE
inline bool IsWorkSerializerClearsTimeCacheEnabled() {
  return IsExperimentEnabled(kExperimentIdWorkSerializerClearsTimeCache);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_BLOCK_EXCESSIVE_REQUESTS_BEFORE_SETTINGS_ACK
inline bool IsBlockExcessiveRequestsBeforeSettingsAckEnabled() {
  return IsExperimentEnabled(
      kExperimentIdBlockExcessiveRequestsBeforeSettingsAck);
}
#define GRPC_EXPERIMENT_IS_INCLUDED_PING_ON_RST_STREAM
inline bool IsPingOnRstStreamEnabled() {
  return IsExperimentEnabled(kExperimentIdPingOnRstStream);
}

extern const ExperimentMetadata g_experiment_metadata[kNumExperiments];

#endif
}  // namespace grpc_core

#endif  // GRPC_SRC_CORE_LIB_EXPERIMENTS_EXPERIMENTS_H
