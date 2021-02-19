pipeline {
    agent any
    
    stages {
     stage('Configure') {
            steps {
                sh '''
                echo "Creating a build folder"
                mkdir -p build
                echo "generate a build system"
                cmake -S game/ -B build/               
                '''
            }
        }
        stage('Build') {
            steps {
                sh '''
                echo "build the app"
                cmake --build build/              
                echo "archiving"
                '''
            }
            post {
                always {
                    sh'''
                echo "cd into test dir"
                cd game/src/test/
                echo "test the game"
                ctest -T test              
                '''
                    xunit testResults: '**/target/*', allowEmptyResults: true
                }
            }
        }
        
        
    }
}
