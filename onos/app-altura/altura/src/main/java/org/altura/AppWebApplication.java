/*
 * Copyright 2018-present Open Networking Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package org.altura;

import org.onlab.rest.AbstractWebApplication;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.Set;

/**
 * Sample REST API web application.
 */
public class AppWebApplication extends AbstractWebApplication {
    @Override
    public Set<Class<?>> getClasses() {
        Set<Class<?>> prueba = new HashSet<>();
        prueba.addAll(getClasses(AppWebResource.class));
        prueba.addAll(getClasses(RpcWebResource.class));
        prueba.addAll(getClasses(SetWebResource.class));
        return prueba;
    }
}
